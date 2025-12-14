#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1626093513;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_11 = -1630174781;
int zero = 0;
unsigned int var_14 = 1865047867U;
int var_15 = -362399177;
unsigned int var_16 = 182267623U;
void init() {
}

void checksum() {
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
