#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned int var_1 = 2113249969U;
unsigned char var_4 = (unsigned char)13;
unsigned int var_6 = 201898087U;
unsigned long long int var_8 = 13380620688791856268ULL;
signed char var_14 = (signed char)47;
int zero = 0;
long long int var_15 = 2422375504036676968LL;
unsigned char var_16 = (unsigned char)43;
signed char var_17 = (signed char)17;
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
