#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)35;
unsigned char var_9 = (unsigned char)240;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)65345;
signed char var_17 = (signed char)-86;
int zero = 0;
unsigned short var_19 = (unsigned short)43615;
unsigned char var_20 = (unsigned char)248;
int var_21 = 463530871;
int var_22 = -110178534;
unsigned char var_23 = (unsigned char)18;
void init() {
}

void checksum() {
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
