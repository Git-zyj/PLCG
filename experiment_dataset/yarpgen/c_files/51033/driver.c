#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 328516801U;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)35;
signed char var_10 = (signed char)5;
unsigned int var_13 = 161275830U;
int zero = 0;
unsigned int var_14 = 1182259595U;
unsigned int var_15 = 330612702U;
_Bool var_16 = (_Bool)0;
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
