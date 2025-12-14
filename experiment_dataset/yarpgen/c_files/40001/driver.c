#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26141;
signed char var_3 = (signed char)-85;
unsigned short var_4 = (unsigned short)8100;
unsigned char var_7 = (unsigned char)188;
unsigned char var_10 = (unsigned char)49;
int var_11 = -1010154995;
int zero = 0;
signed char var_12 = (signed char)126;
unsigned short var_13 = (unsigned short)24330;
short var_14 = (short)-26215;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
