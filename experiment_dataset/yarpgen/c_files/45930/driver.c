#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2135092212U;
signed char var_2 = (signed char)3;
unsigned int var_3 = 3916121903U;
unsigned int var_6 = 3206039216U;
unsigned int var_7 = 1951607558U;
signed char var_8 = (signed char)-117;
unsigned long long int var_9 = 7925775884278847844ULL;
int zero = 0;
unsigned int var_10 = 549693696U;
unsigned int var_11 = 3565397701U;
unsigned int var_12 = 3085302033U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
