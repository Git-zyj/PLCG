#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14947;
unsigned short var_1 = (unsigned short)23850;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)7790;
int zero = 0;
unsigned int var_14 = 2241184208U;
int var_15 = 84370984;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
