#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)50;
short var_4 = (short)-18498;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3129613442U;
short var_7 = (short)8524;
unsigned int var_9 = 3672697849U;
int zero = 0;
short var_12 = (short)12973;
unsigned int var_13 = 868965434U;
short var_14 = (short)26549;
long long int var_15 = -1900689092476692374LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
