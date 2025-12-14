#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48160;
short var_5 = (short)-11459;
unsigned long long int var_8 = 5689918895990083923ULL;
long long int var_11 = -3731494875569193920LL;
unsigned short var_12 = (unsigned short)26473;
long long int var_13 = 3435239106670891465LL;
int zero = 0;
unsigned int var_14 = 2693416591U;
unsigned short var_15 = (unsigned short)46744;
signed char var_16 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
