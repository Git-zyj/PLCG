#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 55720634;
signed char var_1 = (signed char)-83;
long long int var_2 = -3469794954480540899LL;
int var_3 = 800714758;
int var_4 = -846120639;
unsigned char var_5 = (unsigned char)55;
int var_7 = -746221700;
int var_8 = 1028909291;
long long int var_10 = 3409923930233963100LL;
long long int var_11 = 7517484013025327496LL;
unsigned long long int var_13 = 4641726583273525487ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)12296;
signed char var_15 = (signed char)122;
short var_16 = (short)8401;
short var_17 = (short)17613;
void init() {
}

void checksum() {
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
