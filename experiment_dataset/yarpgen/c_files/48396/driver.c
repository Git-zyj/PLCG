#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
unsigned short var_3 = (unsigned short)49759;
long long int var_13 = 5966353021872761833LL;
int zero = 0;
signed char var_17 = (signed char)-126;
short var_18 = (short)-23672;
unsigned long long int var_19 = 11629718352655873398ULL;
long long int var_20 = 7076981153468793706LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
