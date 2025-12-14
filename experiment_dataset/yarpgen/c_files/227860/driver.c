#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18274;
unsigned short var_2 = (unsigned short)20186;
long long int var_3 = 2244076871879119854LL;
unsigned short var_13 = (unsigned short)62964;
unsigned int var_15 = 2693614294U;
int zero = 0;
int var_16 = 750915138;
unsigned int var_17 = 1050589508U;
int var_18 = 1788964224;
long long int var_19 = 7012662862101517914LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
