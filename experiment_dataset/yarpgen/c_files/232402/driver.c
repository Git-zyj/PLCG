#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8715082741088989236ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)73;
short var_6 = (short)25616;
unsigned char var_8 = (unsigned char)231;
int zero = 0;
signed char var_10 = (signed char)-20;
unsigned char var_11 = (unsigned char)147;
long long int var_12 = 2800928557641144051LL;
signed char var_13 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
