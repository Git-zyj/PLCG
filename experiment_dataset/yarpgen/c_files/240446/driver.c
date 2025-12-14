#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3703635399173942537ULL;
unsigned int var_2 = 3022991799U;
short var_4 = (short)14983;
short var_8 = (short)-6811;
unsigned int var_9 = 743550540U;
unsigned long long int var_10 = 12125163752324481715ULL;
int zero = 0;
int var_11 = -1685858917;
signed char var_12 = (signed char)41;
short var_13 = (short)9174;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
