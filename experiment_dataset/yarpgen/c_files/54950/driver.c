#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-551;
int var_2 = 854633275;
_Bool var_4 = (_Bool)1;
int var_6 = -621115345;
unsigned char var_7 = (unsigned char)132;
unsigned long long int var_8 = 13413943655487452711ULL;
unsigned char var_10 = (unsigned char)139;
unsigned int var_11 = 922866696U;
int zero = 0;
short var_12 = (short)31827;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3732847323562439421ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
