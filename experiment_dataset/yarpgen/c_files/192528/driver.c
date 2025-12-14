#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 20533838168279932ULL;
unsigned char var_1 = (unsigned char)239;
int var_3 = 316009547;
unsigned int var_4 = 601209043U;
signed char var_5 = (signed char)76;
int var_7 = -625023525;
unsigned int var_8 = 4210521122U;
unsigned short var_9 = (unsigned short)24646;
unsigned long long int var_11 = 8609479172601995136ULL;
short var_12 = (short)-14344;
int zero = 0;
short var_13 = (short)11103;
unsigned int var_14 = 1903460405U;
int var_15 = -844512731;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
