#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1235268356U;
short var_8 = (short)22454;
short var_9 = (short)31781;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)53;
int zero = 0;
short var_16 = (short)-20752;
unsigned int var_17 = 4232459635U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
