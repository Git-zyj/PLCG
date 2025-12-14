#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5213;
unsigned char var_1 = (unsigned char)80;
int var_4 = -164242869;
short var_6 = (short)10250;
int var_7 = 928812702;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-40;
short var_12 = (short)21846;
int zero = 0;
short var_14 = (short)23916;
signed char var_15 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
