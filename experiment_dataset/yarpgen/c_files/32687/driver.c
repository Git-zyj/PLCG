#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19522;
unsigned char var_2 = (unsigned char)133;
unsigned int var_3 = 163517366U;
_Bool var_4 = (_Bool)1;
int var_5 = -582717503;
unsigned char var_9 = (unsigned char)25;
short var_13 = (short)7341;
short var_14 = (short)30387;
signed char var_17 = (signed char)-88;
unsigned short var_18 = (unsigned short)34769;
int zero = 0;
unsigned char var_19 = (unsigned char)107;
long long int var_20 = 6332109364948889587LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2563061350U;
long long int var_23 = 5355019082139191725LL;
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
