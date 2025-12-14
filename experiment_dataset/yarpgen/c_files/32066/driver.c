#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -970874019;
unsigned int var_13 = 165173434U;
unsigned short var_15 = (unsigned short)25518;
int zero = 0;
unsigned long long int var_17 = 18426828012223544499ULL;
unsigned short var_18 = (unsigned short)40931;
unsigned short var_19 = (unsigned short)61084;
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
