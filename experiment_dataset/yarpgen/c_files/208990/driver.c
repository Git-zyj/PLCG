#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1324033510U;
short var_4 = (short)-1333;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)63039;
int zero = 0;
unsigned char var_17 = (unsigned char)34;
unsigned short var_18 = (unsigned short)1877;
_Bool var_19 = (_Bool)0;
long long int var_20 = -1746895019951894345LL;
signed char var_21 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
