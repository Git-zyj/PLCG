#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_6 = (unsigned short)54798;
long long int var_8 = -8249480061989503145LL;
signed char var_10 = (signed char)-113;
short var_13 = (short)10706;
int var_17 = 1800031601;
short var_19 = (short)16572;
int zero = 0;
short var_20 = (short)2228;
unsigned short var_21 = (unsigned short)10736;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
