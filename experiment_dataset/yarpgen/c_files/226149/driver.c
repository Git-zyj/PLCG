#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 300368542U;
int var_7 = -416097220;
unsigned long long int var_11 = 10306611365795335820ULL;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)69;
int var_17 = 627020271;
unsigned char var_19 = (unsigned char)1;
int zero = 0;
unsigned long long int var_20 = 2400230476705870940ULL;
_Bool var_21 = (_Bool)1;
int var_22 = 903062029;
unsigned short var_23 = (unsigned short)47095;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
