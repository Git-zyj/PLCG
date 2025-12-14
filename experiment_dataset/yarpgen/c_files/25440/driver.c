#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
unsigned char var_2 = (unsigned char)232;
int var_6 = -703508856;
signed char var_10 = (signed char)-94;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11427040339077554344ULL;
long long int var_13 = -3051497172232731023LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)200;
_Bool var_16 = (_Bool)1;
int var_17 = -1072363087;
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
