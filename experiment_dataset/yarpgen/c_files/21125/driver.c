#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1362215797;
unsigned long long int var_11 = 15851264208244931955ULL;
int var_12 = -731349953;
short var_18 = (short)26998;
int zero = 0;
unsigned long long int var_20 = 6199974521570547078ULL;
unsigned short var_21 = (unsigned short)14036;
int var_22 = -965887255;
short var_23 = (short)-25984;
unsigned long long int var_24 = 2178631042985204089ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
