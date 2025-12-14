#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)123;
unsigned short var_9 = (unsigned short)63228;
int zero = 0;
signed char var_11 = (signed char)124;
signed char var_12 = (signed char)-121;
int var_13 = -836027574;
short var_14 = (short)-20397;
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
