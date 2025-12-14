#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
signed char var_2 = (signed char)-100;
unsigned int var_5 = 208661015U;
unsigned short var_6 = (unsigned short)32898;
signed char var_7 = (signed char)51;
signed char var_10 = (signed char)45;
unsigned int var_12 = 2536051012U;
int zero = 0;
unsigned int var_15 = 3146787325U;
unsigned int var_16 = 2199916991U;
unsigned long long int var_17 = 802772612189510098ULL;
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
