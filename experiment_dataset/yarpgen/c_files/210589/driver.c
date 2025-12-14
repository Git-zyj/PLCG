#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)94;
signed char var_7 = (signed char)4;
unsigned long long int var_9 = 7592142483830842469ULL;
short var_11 = (short)6942;
int zero = 0;
unsigned char var_17 = (unsigned char)3;
unsigned short var_18 = (unsigned short)63774;
short var_19 = (short)-31066;
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
