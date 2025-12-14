#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned char var_2 = (unsigned char)201;
unsigned int var_4 = 593793425U;
int var_11 = -905260535;
unsigned int var_12 = 803267599U;
short var_15 = (short)-9296;
int zero = 0;
unsigned int var_16 = 2226225858U;
unsigned long long int var_17 = 4779323056991253402ULL;
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
