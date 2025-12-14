#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9166520836981456856ULL;
unsigned int var_7 = 3896117286U;
int zero = 0;
unsigned char var_15 = (unsigned char)201;
unsigned short var_16 = (unsigned short)31368;
unsigned int var_17 = 4198010717U;
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
