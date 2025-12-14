#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1629366331U;
short var_1 = (short)30216;
_Bool var_2 = (_Bool)0;
short var_3 = (short)31153;
unsigned int var_6 = 2038367036U;
int var_7 = -2111607747;
long long int var_8 = 7663574440294387482LL;
long long int var_11 = -5020570832927495133LL;
unsigned short var_12 = (unsigned short)59231;
signed char var_13 = (signed char)8;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6171285446960304443LL;
short var_16 = (short)-496;
short var_17 = (short)17181;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
