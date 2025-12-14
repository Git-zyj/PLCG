#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51162;
unsigned int var_2 = 2652021007U;
unsigned int var_4 = 475396256U;
unsigned int var_5 = 1087705753U;
unsigned long long int var_15 = 5167629747557059018ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)16096;
long long int var_17 = 8890568652652074314LL;
void init() {
}

void checksum() {
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
