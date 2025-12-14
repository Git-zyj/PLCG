#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned short var_3 = (unsigned short)3522;
signed char var_4 = (signed char)-103;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 2656014479959950455ULL;
unsigned int var_13 = 3768394674U;
unsigned short var_14 = (unsigned short)13707;
long long int var_15 = -6509353429907339797LL;
unsigned int var_16 = 2745941463U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
