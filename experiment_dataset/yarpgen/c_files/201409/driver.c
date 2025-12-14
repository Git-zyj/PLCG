#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
int var_1 = -665059796;
unsigned long long int var_3 = 1968518288506215893ULL;
unsigned char var_5 = (unsigned char)169;
short var_6 = (short)-14660;
short var_8 = (short)-7714;
unsigned int var_9 = 3341943073U;
unsigned int var_13 = 2250777864U;
int zero = 0;
short var_16 = (short)32673;
unsigned long long int var_17 = 15714803253658519948ULL;
unsigned char var_18 = (unsigned char)63;
unsigned long long int var_19 = 7011540699629593046ULL;
void init() {
}

void checksum() {
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
