#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -74085262;
unsigned int var_4 = 4075601470U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)17157;
long long int var_10 = 7366111626338749478LL;
unsigned long long int var_14 = 10023724468563593148ULL;
unsigned long long int var_15 = 1244363953182920728ULL;
unsigned int var_19 = 3028549422U;
int zero = 0;
unsigned int var_20 = 3308532040U;
unsigned short var_21 = (unsigned short)12417;
unsigned int var_22 = 3540110828U;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 17178802005502817236ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
