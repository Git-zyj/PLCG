#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
long long int var_7 = -5016739128735023693LL;
unsigned long long int var_10 = 3189162816999138125ULL;
unsigned char var_15 = (unsigned char)84;
int zero = 0;
short var_17 = (short)-16643;
unsigned long long int var_18 = 13578786328968091271ULL;
int var_19 = 2047440301;
short var_20 = (short)-32658;
unsigned long long int var_21 = 17795409986273185040ULL;
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
