#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16417386980962060210ULL;
_Bool var_1 = (_Bool)1;
long long int var_3 = -2474269798385876607LL;
signed char var_4 = (signed char)-34;
unsigned short var_5 = (unsigned short)40507;
unsigned char var_10 = (unsigned char)179;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 11823042628431214800ULL;
unsigned long long int var_16 = 6431848668242339435ULL;
unsigned char var_17 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
