#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1554815533;
unsigned long long int var_2 = 913540824173035621ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 2963704792U;
long long int var_7 = 5744897512457977923LL;
short var_8 = (short)-23947;
int var_11 = -399272052;
int zero = 0;
long long int var_12 = 4061000551144190802LL;
int var_13 = 1042774685;
short var_14 = (short)-9960;
signed char var_15 = (signed char)126;
int var_16 = 2032995712;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
