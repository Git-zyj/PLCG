#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7288499549320674970ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5594784009576900191ULL;
unsigned short var_4 = (unsigned short)33217;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)61;
short var_12 = (short)-11210;
int zero = 0;
long long int var_16 = 6603790437367111918LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)12880;
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
