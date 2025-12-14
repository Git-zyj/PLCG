#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5489258936972367132LL;
unsigned int var_1 = 3045181660U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = 142953622748473001LL;
short var_6 = (short)5354;
unsigned int var_8 = 1502180567U;
short var_9 = (short)-20627;
int zero = 0;
unsigned short var_10 = (unsigned short)19678;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29736;
unsigned long long int var_13 = 13650645877909767686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
