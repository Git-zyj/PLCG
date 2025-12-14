#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9375639791429765365ULL;
int var_1 = 1836900398;
int var_2 = -1846645;
long long int var_6 = -4393398510371855293LL;
unsigned short var_7 = (unsigned short)2830;
unsigned long long int var_11 = 12615355186256779623ULL;
int var_12 = 572402479;
int zero = 0;
unsigned char var_13 = (unsigned char)180;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4047781791096386216LL;
void init() {
}

void checksum() {
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
