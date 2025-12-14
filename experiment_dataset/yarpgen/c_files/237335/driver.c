#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7318807584715350074LL;
unsigned int var_3 = 3842423334U;
unsigned long long int var_7 = 9737368225561731062ULL;
int var_8 = 1324949503;
unsigned int var_10 = 2670252112U;
int var_16 = -1509999312;
int zero = 0;
unsigned char var_18 = (unsigned char)160;
unsigned char var_19 = (unsigned char)252;
unsigned char var_20 = (unsigned char)64;
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
