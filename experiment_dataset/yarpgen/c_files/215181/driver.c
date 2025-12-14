#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1010227625;
long long int var_5 = -3320547735490566731LL;
unsigned char var_8 = (unsigned char)55;
unsigned char var_12 = (unsigned char)64;
unsigned short var_13 = (unsigned short)11047;
int zero = 0;
unsigned short var_15 = (unsigned short)16374;
unsigned char var_16 = (unsigned char)48;
unsigned long long int var_17 = 15039918711133631825ULL;
unsigned long long int var_18 = 4714390116138298766ULL;
int var_19 = 1263409877;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
