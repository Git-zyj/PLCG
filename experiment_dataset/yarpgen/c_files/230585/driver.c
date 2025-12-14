#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44067;
short var_2 = (short)-12648;
long long int var_4 = 1143196050900539490LL;
unsigned short var_7 = (unsigned short)49288;
long long int var_8 = 4354834653836673363LL;
short var_11 = (short)-6961;
unsigned long long int var_13 = 2278818347409904238ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)117;
short var_18 = (short)-22292;
unsigned short var_19 = (unsigned short)37269;
signed char var_20 = (signed char)29;
unsigned short var_21 = (unsigned short)7247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
