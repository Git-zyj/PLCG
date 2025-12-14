#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16516530105111718638ULL;
long long int var_4 = -2355527251949472920LL;
unsigned long long int var_5 = 8059782882007356140ULL;
int var_7 = -2070506047;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3398114286U;
int zero = 0;
unsigned long long int var_12 = 3135275552377111247ULL;
long long int var_13 = -7930521952798983285LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)166;
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
