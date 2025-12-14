#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4944;
signed char var_3 = (signed char)-29;
signed char var_6 = (signed char)87;
short var_10 = (short)-14387;
long long int var_11 = 8980674694138267225LL;
unsigned short var_13 = (unsigned short)20502;
int zero = 0;
unsigned char var_14 = (unsigned char)92;
unsigned char var_15 = (unsigned char)110;
signed char var_16 = (signed char)-104;
_Bool var_17 = (_Bool)1;
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
