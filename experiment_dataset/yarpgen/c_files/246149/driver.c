#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned long long int var_1 = 7821562891252914714ULL;
unsigned short var_5 = (unsigned short)39235;
int var_6 = -1286960652;
long long int var_8 = 1627669037953050235LL;
unsigned int var_10 = 3964743580U;
unsigned int var_11 = 666191867U;
int zero = 0;
unsigned short var_12 = (unsigned short)25758;
unsigned char var_13 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
