#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
unsigned char var_1 = (unsigned char)213;
int var_2 = 1189495466;
unsigned long long int var_4 = 4339857424869909477ULL;
unsigned short var_6 = (unsigned short)43837;
unsigned short var_10 = (unsigned short)13785;
int zero = 0;
unsigned short var_12 = (unsigned short)49783;
int var_13 = 1176615196;
int var_14 = -35854070;
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
