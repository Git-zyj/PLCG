#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19187;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11320313067270240306ULL;
short var_4 = (short)22183;
unsigned long long int var_5 = 8444818395243403708ULL;
short var_8 = (short)-31735;
unsigned long long int var_10 = 14482040460057295885ULL;
int zero = 0;
short var_11 = (short)-12345;
unsigned short var_12 = (unsigned short)54182;
unsigned short var_13 = (unsigned short)63677;
unsigned int var_14 = 987079884U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
