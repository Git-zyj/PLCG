#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)7;
unsigned char var_9 = (unsigned char)74;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)102;
short var_12 = (short)3241;
short var_13 = (short)-19166;
void init() {
}

void checksum() {
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
