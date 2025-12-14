#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)148;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)151;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)109;
short var_9 = (short)-11206;
unsigned short var_10 = (unsigned short)47379;
unsigned char var_11 = (unsigned char)36;
unsigned char var_14 = (unsigned char)244;
signed char var_15 = (signed char)-5;
short var_17 = (short)29312;
int zero = 0;
signed char var_18 = (signed char)-71;
unsigned int var_19 = 3508410373U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
