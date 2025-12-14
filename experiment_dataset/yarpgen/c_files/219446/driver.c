#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -160168565;
short var_3 = (short)-23050;
signed char var_4 = (signed char)125;
unsigned short var_6 = (unsigned short)65166;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_11 = 718989317;
unsigned short var_12 = (unsigned short)43344;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
