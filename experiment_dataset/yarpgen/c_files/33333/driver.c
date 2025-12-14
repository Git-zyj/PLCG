#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
unsigned long long int var_3 = 11368863492522446573ULL;
unsigned int var_6 = 4017488486U;
unsigned int var_8 = 2978003363U;
unsigned int var_11 = 3631246165U;
int zero = 0;
unsigned short var_14 = (unsigned short)12281;
unsigned int var_15 = 1947212597U;
unsigned int var_16 = 254884314U;
unsigned long long int var_17 = 822116852263100523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
