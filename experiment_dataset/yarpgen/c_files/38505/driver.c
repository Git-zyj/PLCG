#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2538982654U;
unsigned int var_5 = 3042972112U;
signed char var_7 = (signed char)50;
unsigned int var_8 = 2676618494U;
unsigned int var_10 = 777251205U;
int zero = 0;
unsigned int var_20 = 632327266U;
signed char var_21 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
