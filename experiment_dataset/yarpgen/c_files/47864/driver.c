#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14023;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 10172819913302607033ULL;
unsigned short var_4 = (unsigned short)1641;
unsigned int var_6 = 1180282197U;
unsigned int var_7 = 2198267765U;
signed char var_9 = (signed char)43;
unsigned long long int var_12 = 8561673885184271079ULL;
unsigned int var_17 = 2113558730U;
int zero = 0;
signed char var_18 = (signed char)-26;
unsigned int var_19 = 2253035273U;
long long int var_20 = 6782620523164689323LL;
signed char var_21 = (signed char)63;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
