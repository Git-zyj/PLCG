#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11031;
int var_1 = 1039932725;
short var_2 = (short)22920;
int var_6 = 1521588311;
short var_9 = (short)8738;
short var_10 = (short)21135;
int zero = 0;
int var_12 = 1489346579;
int var_13 = 630155406;
_Bool var_14 = (_Bool)0;
int var_15 = 113079008;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
