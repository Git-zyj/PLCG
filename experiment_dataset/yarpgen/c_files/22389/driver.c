#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 2386875968757210710ULL;
unsigned char var_4 = (unsigned char)249;
int var_6 = 1290279692;
signed char var_7 = (signed char)-104;
unsigned char var_10 = (unsigned char)116;
unsigned char var_12 = (unsigned char)75;
int zero = 0;
unsigned long long int var_13 = 16712240663031704880ULL;
unsigned short var_14 = (unsigned short)587;
signed char var_15 = (signed char)-126;
signed char var_16 = (signed char)20;
int var_17 = 608488584;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
