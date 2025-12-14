#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 7184362995367193901LL;
unsigned char var_6 = (unsigned char)27;
unsigned int var_10 = 1910316446U;
short var_13 = (short)-27464;
long long int var_16 = -2328329684976668115LL;
unsigned short var_17 = (unsigned short)22535;
int zero = 0;
short var_18 = (short)-18622;
unsigned int var_19 = 4127878415U;
signed char var_20 = (signed char)-126;
unsigned long long int var_21 = 15914280487822065524ULL;
unsigned short var_22 = (unsigned short)26655;
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
