#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)24450;
unsigned int var_2 = 521558732U;
unsigned char var_3 = (unsigned char)233;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)26;
short var_7 = (short)-6172;
long long int var_8 = -8256371002540143486LL;
int zero = 0;
unsigned long long int var_10 = 11823547108811960521ULL;
short var_11 = (short)-31677;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)21;
unsigned int var_14 = 271298046U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
