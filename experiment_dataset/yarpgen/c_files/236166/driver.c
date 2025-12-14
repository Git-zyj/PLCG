#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-26013;
unsigned short var_8 = (unsigned short)5384;
signed char var_12 = (signed char)-37;
int zero = 0;
unsigned char var_17 = (unsigned char)246;
int var_18 = -1735197096;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)47581;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
