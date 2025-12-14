#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2165006870276429842LL;
short var_5 = (short)13981;
unsigned long long int var_11 = 7783578569997949467ULL;
unsigned long long int var_19 = 15681060106315957330ULL;
int zero = 0;
int var_20 = 1440019497;
unsigned char var_21 = (unsigned char)61;
void init() {
}

void checksum() {
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
