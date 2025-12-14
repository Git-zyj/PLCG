#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
signed char var_2 = (signed char)30;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)50;
unsigned short var_15 = (unsigned short)35023;
int zero = 0;
short var_18 = (short)3208;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)44;
signed char var_21 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
