#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
int var_3 = 1299493135;
int var_4 = -2021897738;
unsigned long long int var_6 = 15117151385749810384ULL;
unsigned long long int var_7 = 11894015964246420450ULL;
unsigned char var_8 = (unsigned char)20;
unsigned int var_9 = 59425831U;
unsigned char var_10 = (unsigned char)53;
unsigned int var_11 = 2765082576U;
int zero = 0;
long long int var_14 = 8846654460060788576LL;
unsigned char var_15 = (unsigned char)246;
unsigned int var_16 = 1163115307U;
int var_17 = 1864650496;
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
