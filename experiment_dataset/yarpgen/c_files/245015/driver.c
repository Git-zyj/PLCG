#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)64230;
unsigned long long int var_8 = 12868559281065967271ULL;
unsigned char var_9 = (unsigned char)137;
unsigned int var_11 = 314564024U;
int zero = 0;
unsigned int var_14 = 774390392U;
unsigned short var_15 = (unsigned short)42313;
unsigned long long int var_16 = 5500258891553974124ULL;
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
