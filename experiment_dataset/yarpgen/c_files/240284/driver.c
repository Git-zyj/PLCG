#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2983828122778436254ULL;
unsigned int var_3 = 3914976438U;
unsigned int var_6 = 73819089U;
unsigned short var_7 = (unsigned short)42274;
int zero = 0;
unsigned int var_10 = 3818396568U;
unsigned int var_11 = 368812044U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
