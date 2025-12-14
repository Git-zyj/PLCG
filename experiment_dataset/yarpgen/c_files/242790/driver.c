#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9847;
int var_4 = 314886085;
unsigned char var_5 = (unsigned char)205;
_Bool var_8 = (_Bool)1;
long long int var_14 = 7407719255291214645LL;
unsigned int var_15 = 957745099U;
unsigned char var_18 = (unsigned char)54;
int zero = 0;
unsigned long long int var_19 = 10708833869216555126ULL;
unsigned int var_20 = 1461755444U;
unsigned short var_21 = (unsigned short)30442;
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
