#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
unsigned int var_1 = 2072567401U;
unsigned short var_2 = (unsigned short)17391;
unsigned long long int var_3 = 46393119399851297ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 5783887432100433187LL;
int var_6 = -1067430815;
long long int var_8 = -6249637501024005313LL;
unsigned long long int var_10 = 4769012876605907146ULL;
unsigned long long int var_11 = 8383187444386661687ULL;
unsigned int var_12 = 2542141666U;
int zero = 0;
long long int var_13 = 8164659375484078768LL;
long long int var_14 = -5789489024588405090LL;
long long int var_15 = -7990990756077503756LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
