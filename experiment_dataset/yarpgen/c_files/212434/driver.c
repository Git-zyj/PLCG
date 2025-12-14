#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
unsigned char var_1 = (unsigned char)1;
signed char var_3 = (signed char)70;
unsigned char var_4 = (unsigned char)48;
int var_8 = -482907307;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1229387444U;
int zero = 0;
unsigned short var_18 = (unsigned short)5672;
long long int var_19 = -8740039279877089878LL;
unsigned short var_20 = (unsigned short)64235;
unsigned int var_21 = 4089990606U;
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
