#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2943168658U;
unsigned long long int var_2 = 5930260396090060949ULL;
unsigned long long int var_3 = 17890128122202908832ULL;
unsigned int var_4 = 2448848082U;
unsigned int var_7 = 1073260161U;
long long int var_10 = 7020110563077050211LL;
long long int var_11 = -411681585984611830LL;
signed char var_12 = (signed char)0;
unsigned long long int var_14 = 17525972085200083764ULL;
unsigned int var_15 = 3647832197U;
unsigned long long int var_16 = 16360735176143622157ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)54;
unsigned long long int var_18 = 5822468370530281565ULL;
unsigned int var_19 = 3112977002U;
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
