#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -690713894;
unsigned long long int var_8 = 10083944797541057929ULL;
unsigned short var_9 = (unsigned short)64559;
signed char var_10 = (signed char)-95;
int var_16 = -854612444;
int zero = 0;
signed char var_17 = (signed char)70;
signed char var_18 = (signed char)-54;
int var_19 = 2136106265;
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
