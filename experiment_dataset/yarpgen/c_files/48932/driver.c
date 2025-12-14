#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned int var_2 = 1045540891U;
int var_3 = -2084795533;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2935663127U;
signed char var_11 = (signed char)126;
int zero = 0;
int var_12 = 1754120069;
signed char var_13 = (signed char)103;
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
