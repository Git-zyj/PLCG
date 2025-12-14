#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8321235515540851523LL;
long long int var_1 = 6554753604812061712LL;
signed char var_4 = (signed char)53;
unsigned long long int var_5 = 1113475288300119503ULL;
signed char var_11 = (signed char)51;
short var_13 = (short)5788;
short var_14 = (short)-11398;
int zero = 0;
unsigned long long int var_15 = 15816161320538738967ULL;
unsigned long long int var_16 = 8923812978296436362ULL;
unsigned short var_17 = (unsigned short)24886;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
