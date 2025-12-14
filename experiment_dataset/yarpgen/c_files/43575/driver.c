#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6356836390049707293LL;
int var_3 = 699441257;
int var_17 = -1666067549;
short var_18 = (short)-5655;
int zero = 0;
short var_20 = (short)-13341;
unsigned int var_21 = 3125210457U;
unsigned short var_22 = (unsigned short)21998;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
