#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17049;
unsigned long long int var_2 = 11764176564554009628ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)17054;
int var_8 = 2055396568;
unsigned long long int var_11 = 17362510883433634412ULL;
unsigned char var_13 = (unsigned char)104;
unsigned int var_14 = 3815270296U;
long long int var_16 = -93679621599428438LL;
int zero = 0;
long long int var_17 = 3326896769946142924LL;
unsigned long long int var_18 = 11733326145289503980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
