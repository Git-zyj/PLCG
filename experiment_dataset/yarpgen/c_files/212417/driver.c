#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2693663075U;
short var_5 = (short)27638;
signed char var_9 = (signed char)-42;
unsigned char var_14 = (unsigned char)19;
int zero = 0;
unsigned short var_15 = (unsigned short)41800;
unsigned char var_16 = (unsigned char)17;
unsigned int var_17 = 3120143810U;
signed char var_18 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
