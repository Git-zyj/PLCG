#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)175;
short var_3 = (short)-12459;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-9;
signed char var_9 = (signed char)-1;
signed char var_15 = (signed char)-81;
unsigned short var_18 = (unsigned short)46388;
int zero = 0;
unsigned short var_19 = (unsigned short)54167;
unsigned short var_20 = (unsigned short)27222;
signed char var_21 = (signed char)-109;
void init() {
}

void checksum() {
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
