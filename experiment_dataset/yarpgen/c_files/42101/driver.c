#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15592828680405926472ULL;
unsigned short var_3 = (unsigned short)52598;
long long int var_6 = 7988491517877946997LL;
signed char var_13 = (signed char)29;
int zero = 0;
unsigned int var_18 = 2028797361U;
unsigned int var_19 = 784152889U;
unsigned short var_20 = (unsigned short)25605;
unsigned long long int var_21 = 12338801028892279157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
