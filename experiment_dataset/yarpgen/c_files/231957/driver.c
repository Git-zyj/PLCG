#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)9;
unsigned short var_2 = (unsigned short)24453;
int var_3 = 451890704;
short var_5 = (short)4715;
short var_6 = (short)19119;
unsigned long long int var_10 = 2918286033630988221ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -497291064;
int var_14 = 191887465;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
