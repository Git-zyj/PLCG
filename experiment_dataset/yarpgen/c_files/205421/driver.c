#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7585;
unsigned char var_1 = (unsigned char)185;
unsigned int var_2 = 3498801769U;
unsigned long long int var_3 = 13911791460136656628ULL;
unsigned int var_4 = 3991854634U;
unsigned short var_6 = (unsigned short)6786;
int var_7 = 1242541262;
long long int var_8 = 8240929557652460924LL;
int zero = 0;
signed char var_10 = (signed char)1;
unsigned long long int var_11 = 13387469409972349764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
