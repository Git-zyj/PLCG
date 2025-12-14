#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1081628043U;
unsigned char var_7 = (unsigned char)56;
short var_8 = (short)8453;
signed char var_9 = (signed char)-118;
unsigned long long int var_12 = 2813361288243334730ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)47942;
int zero = 0;
long long int var_19 = 1621655337162134269LL;
short var_20 = (short)-16772;
int var_21 = 1742013241;
void init() {
}

void checksum() {
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
