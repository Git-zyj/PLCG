#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2193320177U;
unsigned int var_6 = 2454562258U;
unsigned int var_11 = 3069903815U;
int zero = 0;
unsigned int var_18 = 2659420998U;
unsigned int var_19 = 2991047347U;
void init() {
}

void checksum() {
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
