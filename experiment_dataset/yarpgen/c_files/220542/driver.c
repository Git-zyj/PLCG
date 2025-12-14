#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1183152085;
_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 11438683457077826799ULL;
unsigned char var_10 = (unsigned char)251;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)26;
short var_15 = (short)-18029;
int zero = 0;
signed char var_16 = (signed char)-119;
unsigned int var_17 = 2733208435U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5381064662962297498LL;
signed char var_20 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
