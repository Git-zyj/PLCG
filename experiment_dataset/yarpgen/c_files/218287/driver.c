#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1883143693;
int var_7 = 98489291;
int var_10 = -71931928;
unsigned short var_14 = (unsigned short)50887;
int zero = 0;
unsigned int var_18 = 1299932119U;
short var_19 = (short)-16520;
signed char var_20 = (signed char)-64;
void init() {
}

void checksum() {
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
