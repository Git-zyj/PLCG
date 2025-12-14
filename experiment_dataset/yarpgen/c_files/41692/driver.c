#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5455;
int var_1 = 540813134;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)17;
short var_5 = (short)-23981;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
short var_10 = (short)29926;
int var_11 = -1539543503;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
