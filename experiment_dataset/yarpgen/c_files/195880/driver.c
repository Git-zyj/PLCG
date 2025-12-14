#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned char var_2 = (unsigned char)93;
int var_3 = 696430760;
unsigned long long int var_5 = 8698601415370286935ULL;
signed char var_6 = (signed char)12;
short var_8 = (short)5535;
int var_9 = -733842350;
signed char var_12 = (signed char)98;
unsigned long long int var_13 = 12587073436046160354ULL;
unsigned int var_15 = 3707851166U;
int zero = 0;
unsigned long long int var_19 = 1567437648570219049ULL;
unsigned short var_20 = (unsigned short)16817;
int var_21 = 342634254;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1920881060U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
