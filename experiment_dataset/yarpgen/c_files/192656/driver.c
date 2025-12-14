#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)20966;
short var_3 = (short)4197;
int var_4 = 475722525;
unsigned short var_9 = (unsigned short)49807;
unsigned char var_14 = (unsigned char)1;
unsigned short var_16 = (unsigned short)15680;
unsigned long long int var_17 = 6845410712842226562ULL;
long long int var_18 = -4070626540861130270LL;
int zero = 0;
unsigned long long int var_19 = 875548680869357204ULL;
unsigned int var_20 = 2705624U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2498711626U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
