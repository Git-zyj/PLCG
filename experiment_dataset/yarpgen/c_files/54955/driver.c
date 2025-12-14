#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50445;
signed char var_3 = (signed char)111;
unsigned char var_4 = (unsigned char)82;
_Bool var_5 = (_Bool)0;
short var_8 = (short)13345;
short var_9 = (short)-13360;
int zero = 0;
short var_14 = (short)12132;
unsigned char var_15 = (unsigned char)24;
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
