#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8244;
unsigned char var_6 = (unsigned char)87;
long long int var_9 = -7195086339575862877LL;
int var_13 = 729804535;
unsigned short var_14 = (unsigned short)1833;
int zero = 0;
long long int var_15 = -1005859057861417233LL;
unsigned long long int var_16 = 5484321519846784414ULL;
unsigned short var_17 = (unsigned short)2173;
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
