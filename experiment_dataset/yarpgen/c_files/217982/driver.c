#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
unsigned char var_6 = (unsigned char)210;
long long int var_12 = 7485086339268113204LL;
int zero = 0;
long long int var_17 = 6217300851845399683LL;
short var_18 = (short)16388;
short var_19 = (short)-25784;
unsigned long long int var_20 = 14690253400569778000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
