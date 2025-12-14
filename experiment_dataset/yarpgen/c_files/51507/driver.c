#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 726438497;
unsigned long long int var_4 = 12383848890257754483ULL;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)105;
int zero = 0;
unsigned int var_12 = 4158110527U;
unsigned short var_13 = (unsigned short)7669;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
