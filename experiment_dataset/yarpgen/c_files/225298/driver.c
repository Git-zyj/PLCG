#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)49;
unsigned int var_2 = 3449302830U;
unsigned int var_6 = 2014499716U;
unsigned short var_9 = (unsigned short)51092;
int var_10 = 752780339;
unsigned int var_12 = 318680266U;
short var_13 = (short)-19440;
int var_14 = 1310709979;
int zero = 0;
signed char var_20 = (signed char)-4;
short var_21 = (short)9478;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)33123;
void init() {
}

void checksum() {
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
