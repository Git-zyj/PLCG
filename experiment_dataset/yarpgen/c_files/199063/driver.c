#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23860;
int var_1 = 122442323;
short var_6 = (short)6042;
unsigned char var_8 = (unsigned char)66;
unsigned short var_11 = (unsigned short)14020;
int zero = 0;
unsigned long long int var_13 = 4857775628146409605ULL;
unsigned short var_14 = (unsigned short)15291;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
