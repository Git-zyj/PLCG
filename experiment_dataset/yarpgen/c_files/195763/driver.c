#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -674812962;
long long int var_1 = -3327491434051077224LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 11365697571411750015ULL;
signed char var_7 = (signed char)63;
unsigned int var_8 = 635982399U;
signed char var_14 = (signed char)-119;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
