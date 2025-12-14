#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17652433372075785855ULL;
long long int var_5 = 8322214279277395468LL;
unsigned short var_10 = (unsigned short)28877;
unsigned short var_11 = (unsigned short)46885;
unsigned short var_13 = (unsigned short)53354;
signed char var_14 = (signed char)-51;
int zero = 0;
unsigned short var_15 = (unsigned short)15046;
unsigned int var_16 = 2299623334U;
void init() {
}

void checksum() {
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
