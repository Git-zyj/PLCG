#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54393;
unsigned int var_6 = 292418934U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 8331080442769343329ULL;
int zero = 0;
signed char var_20 = (signed char)-64;
signed char var_21 = (signed char)-90;
unsigned short var_22 = (unsigned short)14131;
short var_23 = (short)-5107;
void init() {
}

void checksum() {
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
