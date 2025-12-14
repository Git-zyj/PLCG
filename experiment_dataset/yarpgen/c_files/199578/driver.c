#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8893739312289119080LL;
unsigned char var_5 = (unsigned char)254;
unsigned int var_7 = 1909716895U;
int var_8 = -864455869;
int zero = 0;
unsigned char var_15 = (unsigned char)75;
unsigned short var_16 = (unsigned short)63456;
unsigned long long int var_17 = 16958478761667897081ULL;
unsigned char var_18 = (unsigned char)53;
unsigned int var_19 = 1527949718U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
