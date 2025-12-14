#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned short var_2 = (unsigned short)16282;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-24466;
short var_11 = (short)28596;
unsigned char var_12 = (unsigned char)23;
signed char var_13 = (signed char)105;
int var_17 = -397180863;
signed char var_19 = (signed char)57;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)243;
unsigned int var_22 = 1483770957U;
unsigned char var_23 = (unsigned char)222;
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
