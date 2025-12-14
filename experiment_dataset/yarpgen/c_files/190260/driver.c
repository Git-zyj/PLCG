#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 612474720;
unsigned long long int var_1 = 7227974233369597629ULL;
long long int var_2 = 7474816136610754298LL;
int var_4 = 1217016469;
_Bool var_6 = (_Bool)0;
int var_8 = -1526761921;
short var_9 = (short)19701;
_Bool var_10 = (_Bool)0;
short var_11 = (short)23478;
long long int var_12 = 2799125615632482145LL;
short var_14 = (short)-19851;
_Bool var_15 = (_Bool)1;
long long int var_17 = 6973118421854937543LL;
int zero = 0;
long long int var_18 = -8509640561703635334LL;
long long int var_19 = -5639252431406955351LL;
signed char var_20 = (signed char)32;
long long int var_21 = -1351311160855104127LL;
unsigned int var_22 = 2563637116U;
short var_23 = (short)-25002;
int var_24 = -1398928480;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
