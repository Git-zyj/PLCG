#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)60513;
unsigned long long int var_6 = 7913145908796465276ULL;
unsigned int var_7 = 2334528664U;
unsigned char var_13 = (unsigned char)112;
unsigned int var_15 = 1227970284U;
int zero = 0;
short var_16 = (short)4494;
unsigned char var_17 = (unsigned char)247;
unsigned int var_18 = 775063640U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
