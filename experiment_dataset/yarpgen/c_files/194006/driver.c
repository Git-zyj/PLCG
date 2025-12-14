#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27338;
long long int var_5 = -5232409031357429690LL;
unsigned long long int var_10 = 14040628658834187746ULL;
long long int var_11 = 8340006962271361292LL;
unsigned short var_15 = (unsigned short)2971;
int zero = 0;
unsigned long long int var_17 = 15530627913675634561ULL;
unsigned char var_18 = (unsigned char)172;
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
