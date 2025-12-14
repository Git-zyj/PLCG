#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)38;
unsigned int var_13 = 1152525052U;
int var_14 = 1298961704;
int zero = 0;
unsigned int var_17 = 594793271U;
unsigned char var_18 = (unsigned char)64;
int var_19 = 91374716;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
