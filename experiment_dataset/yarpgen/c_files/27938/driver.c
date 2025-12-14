#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1774;
int var_4 = 1870733950;
unsigned char var_6 = (unsigned char)63;
short var_7 = (short)32567;
int zero = 0;
unsigned char var_10 = (unsigned char)250;
short var_11 = (short)20001;
unsigned long long int var_12 = 6867633599489743882ULL;
signed char var_13 = (signed char)100;
int var_14 = -595264344;
unsigned long long int var_15 = 11315823564097703273ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
