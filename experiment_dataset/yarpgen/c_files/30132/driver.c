#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 233728432091023392LL;
unsigned short var_4 = (unsigned short)59024;
unsigned long long int var_5 = 17324311596028159379ULL;
short var_8 = (short)11759;
short var_10 = (short)-20042;
unsigned short var_16 = (unsigned short)46087;
int zero = 0;
unsigned char var_17 = (unsigned char)69;
unsigned long long int var_18 = 12012216875428341659ULL;
short var_19 = (short)-10156;
unsigned short var_20 = (unsigned short)11656;
long long int var_21 = 1831159997998421899LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
