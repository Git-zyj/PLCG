#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15721834092981913648ULL;
unsigned long long int var_7 = 14930459723006558268ULL;
int zero = 0;
unsigned long long int var_14 = 151110763771284146ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14976313173279777691ULL;
unsigned int var_17 = 2302296120U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
