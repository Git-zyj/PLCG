#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)72;
_Bool var_3 = (_Bool)0;
int var_11 = 463483351;
unsigned char var_13 = (unsigned char)229;
unsigned char var_14 = (unsigned char)92;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1636312584U;
long long int var_18 = -5101119970320726040LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)22165;
unsigned long long int var_21 = 1542209459819570116ULL;
int var_22 = -1471308018;
void init() {
}

void checksum() {
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
