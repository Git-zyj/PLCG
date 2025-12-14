#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12465221634724043027ULL;
unsigned short var_7 = (unsigned short)54642;
short var_11 = (short)-32014;
unsigned char var_16 = (unsigned char)24;
int zero = 0;
unsigned char var_18 = (unsigned char)164;
unsigned int var_19 = 2247508665U;
int var_20 = -1808166987;
long long int var_21 = -7409168795516482220LL;
void init() {
}

void checksum() {
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
