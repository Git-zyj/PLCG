#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8005734030271869473ULL;
int var_3 = -2095586993;
unsigned long long int var_4 = 8930360650954589361ULL;
unsigned short var_8 = (unsigned short)26408;
int var_10 = -246126181;
int zero = 0;
long long int var_12 = 6510410993224919795LL;
long long int var_13 = -1099726920519384370LL;
unsigned char var_14 = (unsigned char)206;
short var_15 = (short)26249;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
