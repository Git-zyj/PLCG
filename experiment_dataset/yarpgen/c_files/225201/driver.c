#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2110007344831172295LL;
short var_1 = (short)-12347;
unsigned short var_7 = (unsigned short)17381;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 2957579392U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)38;
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
