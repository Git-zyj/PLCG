#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15559;
signed char var_1 = (signed char)25;
signed char var_2 = (signed char)-20;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)37387;
unsigned char var_11 = (unsigned char)151;
signed char var_16 = (signed char)-16;
unsigned int var_19 = 1467023065U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)82;
int var_22 = 119196080;
void init() {
}

void checksum() {
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
