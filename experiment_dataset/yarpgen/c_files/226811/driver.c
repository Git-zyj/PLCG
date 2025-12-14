#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2819120314U;
long long int var_3 = 7693838796544993162LL;
unsigned char var_4 = (unsigned char)34;
unsigned long long int var_5 = 1677222213484669058ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)54569;
long long int var_9 = 8375955804101163811LL;
unsigned short var_10 = (unsigned short)40635;
int zero = 0;
unsigned int var_11 = 538123532U;
unsigned char var_12 = (unsigned char)171;
signed char var_13 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
