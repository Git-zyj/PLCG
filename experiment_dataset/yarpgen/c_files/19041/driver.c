#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1978115499U;
long long int var_4 = 7928198493481281643LL;
unsigned short var_5 = (unsigned short)16920;
unsigned int var_6 = 1316973407U;
int var_7 = 1946463144;
unsigned short var_8 = (unsigned short)16602;
int zero = 0;
int var_12 = 1724783718;
int var_13 = 475798723;
signed char var_14 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
