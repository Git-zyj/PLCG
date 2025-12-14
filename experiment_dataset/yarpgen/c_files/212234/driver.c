#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6383167628084299891ULL;
short var_2 = (short)30125;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = -1168940568;
signed char var_13 = (signed char)7;
signed char var_14 = (signed char)21;
unsigned long long int var_16 = 6518325658852889193ULL;
int zero = 0;
unsigned int var_17 = 249069578U;
short var_18 = (short)-29430;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
