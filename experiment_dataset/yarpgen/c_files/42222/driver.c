#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4745163215405736198ULL;
unsigned int var_6 = 2731566025U;
signed char var_7 = (signed char)96;
unsigned int var_8 = 1225151026U;
short var_13 = (short)21814;
int zero = 0;
short var_14 = (short)20512;
unsigned short var_15 = (unsigned short)3381;
unsigned char var_16 = (unsigned char)170;
unsigned int var_17 = 1592997329U;
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
