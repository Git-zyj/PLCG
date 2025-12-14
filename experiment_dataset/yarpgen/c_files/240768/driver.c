#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)67;
short var_5 = (short)-7431;
_Bool var_7 = (_Bool)1;
int var_14 = -394592319;
unsigned short var_17 = (unsigned short)34207;
short var_19 = (short)-5439;
int zero = 0;
unsigned short var_20 = (unsigned short)59391;
signed char var_21 = (signed char)11;
signed char var_22 = (signed char)-83;
short var_23 = (short)21202;
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
