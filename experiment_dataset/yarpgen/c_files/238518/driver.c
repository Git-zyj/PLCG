#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4515446368749336994LL;
short var_5 = (short)1626;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-19427;
short var_14 = (short)22906;
short var_16 = (short)-18222;
short var_18 = (short)27136;
unsigned char var_19 = (unsigned char)114;
int zero = 0;
short var_20 = (short)3455;
short var_21 = (short)6191;
long long int var_22 = 3935469794721260516LL;
unsigned int var_23 = 3073628598U;
int var_24 = -244063230;
void init() {
}

void checksum() {
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
