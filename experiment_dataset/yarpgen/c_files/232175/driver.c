#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 9969714084527226615ULL;
unsigned char var_6 = (unsigned char)248;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)235;
long long int var_19 = -2875328097311074953LL;
int zero = 0;
unsigned int var_20 = 2720501971U;
unsigned long long int var_21 = 2737666060677363642ULL;
void init() {
}

void checksum() {
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
