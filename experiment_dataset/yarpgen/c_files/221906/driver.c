#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)34;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)44;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 955408788U;
short var_17 = (short)-31507;
int zero = 0;
unsigned int var_19 = 3980089519U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 224612750U;
unsigned int var_22 = 4276500772U;
signed char var_23 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
