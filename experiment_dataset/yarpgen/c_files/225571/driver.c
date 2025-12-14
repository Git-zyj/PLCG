#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
long long int var_1 = -4027932140091231426LL;
short var_2 = (short)-1425;
int var_6 = 1722672606;
short var_9 = (short)-1075;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)41;
unsigned char var_14 = (unsigned char)70;
short var_15 = (short)-11476;
short var_16 = (short)419;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
