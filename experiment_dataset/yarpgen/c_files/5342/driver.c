#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27519;
signed char var_2 = (signed char)-12;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 424182617U;
unsigned short var_9 = (unsigned short)53775;
int zero = 0;
signed char var_10 = (signed char)62;
int var_11 = -1632678609;
unsigned short var_12 = (unsigned short)8068;
short var_13 = (short)7547;
unsigned char var_14 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
