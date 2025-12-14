#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
signed char var_4 = (signed char)-62;
unsigned char var_5 = (unsigned char)150;
short var_7 = (short)28891;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-29254;
unsigned short var_12 = (unsigned short)63622;
signed char var_16 = (signed char)-82;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)44566;
unsigned char var_19 = (unsigned char)3;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)175;
int var_22 = 1409646879;
unsigned short var_23 = (unsigned short)24330;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
