#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -473174785;
short var_5 = (short)20516;
unsigned char var_7 = (unsigned char)156;
unsigned char var_10 = (unsigned char)56;
int zero = 0;
short var_13 = (short)-25963;
signed char var_14 = (signed char)34;
unsigned long long int var_15 = 15194958162346922491ULL;
long long int var_16 = 726844487844777492LL;
short var_17 = (short)7945;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
