#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned int var_2 = 3271865643U;
int var_3 = -591861545;
short var_4 = (short)-30481;
long long int var_5 = 8329012812682124414LL;
signed char var_6 = (signed char)16;
short var_7 = (short)20577;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
unsigned char var_11 = (unsigned char)104;
int var_12 = 281334364;
short var_13 = (short)30122;
unsigned long long int var_14 = 11606369945996620517ULL;
signed char var_15 = (signed char)43;
void init() {
}

void checksum() {
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
