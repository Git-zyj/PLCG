#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8025180615571178375ULL;
int var_7 = 1902143172;
unsigned int var_8 = 7471852U;
int var_10 = -607222561;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1620295810;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
