#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
short var_2 = (short)-8828;
unsigned long long int var_3 = 4553776292894246613ULL;
int var_4 = -1901009901;
unsigned short var_5 = (unsigned short)24995;
unsigned long long int var_6 = 10889885119600389986ULL;
unsigned char var_7 = (unsigned char)200;
long long int var_8 = -3469036048102932820LL;
short var_10 = (short)-15872;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)197;
unsigned long long int var_14 = 17075822239916635911ULL;
unsigned char var_15 = (unsigned char)211;
_Bool var_16 = (_Bool)0;
long long int var_17 = -5229134564301984427LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
