#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28505;
unsigned long long int var_5 = 7282217884606080478ULL;
unsigned char var_8 = (unsigned char)79;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2987390331875082217LL;
signed char var_15 = (signed char)-57;
void init() {
}

void checksum() {
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
