#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12478522573472886492ULL;
unsigned short var_1 = (unsigned short)26019;
unsigned int var_3 = 462513756U;
unsigned long long int var_6 = 7017117602478341729ULL;
short var_10 = (short)-21394;
int zero = 0;
unsigned long long int var_11 = 10757797566761091745ULL;
unsigned long long int var_12 = 16028060737896520440ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
