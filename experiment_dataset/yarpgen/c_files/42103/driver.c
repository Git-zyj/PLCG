#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2826022173301491066LL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2554015597U;
short var_5 = (short)-9544;
long long int var_6 = -1006471860886614405LL;
unsigned char var_7 = (unsigned char)250;
short var_8 = (short)-18068;
_Bool var_9 = (_Bool)0;
short var_10 = (short)18339;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)-20831;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-23147;
void init() {
}

void checksum() {
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
