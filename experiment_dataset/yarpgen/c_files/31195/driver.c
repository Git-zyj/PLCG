#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 1183172071;
unsigned short var_4 = (unsigned short)56787;
int var_5 = 1746562699;
unsigned char var_8 = (unsigned char)192;
signed char var_12 = (signed char)121;
unsigned int var_13 = 614699296U;
signed char var_14 = (signed char)83;
signed char var_16 = (signed char)-96;
int zero = 0;
unsigned int var_17 = 3381317366U;
unsigned int var_18 = 1985182210U;
short var_19 = (short)25454;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
