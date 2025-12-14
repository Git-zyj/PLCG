#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60771;
int var_2 = -951249780;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)45138;
unsigned long long int var_8 = 10238194428077113077ULL;
unsigned char var_12 = (unsigned char)72;
int var_13 = 491963048;
long long int var_16 = -3091114993305929030LL;
int zero = 0;
unsigned int var_18 = 38815416U;
unsigned short var_19 = (unsigned short)19158;
int var_20 = -2011695938;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
