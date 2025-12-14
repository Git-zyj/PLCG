#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45849;
unsigned int var_6 = 3407687059U;
int var_10 = -507095943;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-3280;
signed char var_15 = (signed char)-37;
short var_16 = (short)-19956;
unsigned short var_17 = (unsigned short)57197;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
