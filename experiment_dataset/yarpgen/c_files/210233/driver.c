#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)217;
unsigned short var_12 = (unsigned short)9074;
unsigned short var_14 = (unsigned short)42796;
unsigned short var_15 = (unsigned short)55303;
int zero = 0;
unsigned short var_18 = (unsigned short)23441;
unsigned short var_19 = (unsigned short)51315;
unsigned long long int var_20 = 12526242827452317055ULL;
unsigned short var_21 = (unsigned short)55699;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
