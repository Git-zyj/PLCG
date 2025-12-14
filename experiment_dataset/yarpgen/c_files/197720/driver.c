#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
int var_1 = -466108229;
unsigned long long int var_3 = 13081288578561040467ULL;
unsigned short var_4 = (unsigned short)29309;
short var_5 = (short)-1267;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)11988;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)44128;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
