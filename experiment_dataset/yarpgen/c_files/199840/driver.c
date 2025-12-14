#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14575840222937562902ULL;
unsigned int var_3 = 2096739758U;
unsigned short var_6 = (unsigned short)57648;
unsigned int var_7 = 1054543494U;
short var_13 = (short)3465;
int zero = 0;
unsigned char var_17 = (unsigned char)170;
long long int var_18 = -706180919236257321LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
