#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned long long int var_1 = 9520185357050124600ULL;
short var_4 = (short)3623;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)393;
unsigned long long int var_11 = 12888064077142217620ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6348221484980109195ULL;
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
