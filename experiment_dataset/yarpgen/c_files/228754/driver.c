#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16470;
signed char var_7 = (signed char)80;
unsigned char var_15 = (unsigned char)44;
int zero = 0;
unsigned int var_18 = 3178192906U;
unsigned short var_19 = (unsigned short)65314;
long long int var_20 = -4076210713969751933LL;
unsigned int var_21 = 4237337591U;
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
