#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22902;
int var_3 = 203285825;
unsigned int var_9 = 1871948089U;
unsigned int var_12 = 2845131816U;
int zero = 0;
unsigned int var_15 = 684072095U;
long long int var_16 = 1714134040126028716LL;
signed char var_17 = (signed char)-29;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
