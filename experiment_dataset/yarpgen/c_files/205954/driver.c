#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)97;
long long int var_5 = 6032839735555424539LL;
unsigned char var_8 = (unsigned char)174;
short var_9 = (short)7006;
unsigned int var_11 = 630251065U;
unsigned int var_12 = 317232713U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_17 = (short)-24602;
int zero = 0;
unsigned short var_18 = (unsigned short)24781;
unsigned char var_19 = (unsigned char)131;
int var_20 = 1765188903;
unsigned char var_21 = (unsigned char)51;
long long int var_22 = 9150373279045670326LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
