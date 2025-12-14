#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4569;
_Bool var_3 = (_Bool)0;
unsigned char var_11 = (unsigned char)87;
int zero = 0;
unsigned short var_14 = (unsigned short)64049;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5228293902420665971LL;
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
