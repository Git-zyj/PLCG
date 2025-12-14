#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1018877272;
unsigned short var_1 = (unsigned short)20188;
signed char var_3 = (signed char)25;
signed char var_4 = (signed char)13;
short var_5 = (short)28365;
unsigned int var_6 = 2882320451U;
signed char var_7 = (signed char)23;
unsigned short var_8 = (unsigned short)24635;
unsigned char var_9 = (unsigned char)207;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)34605;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
