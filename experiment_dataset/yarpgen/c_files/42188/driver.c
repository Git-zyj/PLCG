#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 673043764U;
signed char var_3 = (signed char)-4;
_Bool var_6 = (_Bool)1;
short var_9 = (short)30141;
signed char var_10 = (signed char)3;
int zero = 0;
unsigned short var_11 = (unsigned short)26108;
signed char var_12 = (signed char)10;
long long int var_13 = -425906273800799223LL;
long long int var_14 = -4744230205014535175LL;
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
