#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
_Bool var_2 = (_Bool)0;
short var_3 = (short)764;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 516321236U;
int var_7 = 472288535;
unsigned char var_10 = (unsigned char)8;
int zero = 0;
long long int var_13 = -4782355791745203205LL;
short var_14 = (short)29450;
int var_15 = -1310655199;
signed char var_16 = (signed char)-41;
void init() {
}

void checksum() {
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
