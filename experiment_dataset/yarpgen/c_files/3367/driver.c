#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
long long int var_3 = -5274900368426368363LL;
signed char var_4 = (signed char)-3;
short var_6 = (short)-15160;
int var_8 = 867927934;
_Bool var_11 = (_Bool)1;
unsigned long long int var_16 = 10169214110882418954ULL;
int zero = 0;
signed char var_20 = (signed char)-15;
unsigned char var_21 = (unsigned char)157;
signed char var_22 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
