#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1365;
signed char var_12 = (signed char)-98;
unsigned short var_13 = (unsigned short)36831;
unsigned int var_14 = 2510761642U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 17892592856742963949ULL;
short var_17 = (short)-1011;
int zero = 0;
signed char var_19 = (signed char)52;
unsigned char var_20 = (unsigned char)139;
long long int var_21 = 7449153603775716748LL;
unsigned short var_22 = (unsigned short)35775;
void init() {
}

void checksum() {
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
