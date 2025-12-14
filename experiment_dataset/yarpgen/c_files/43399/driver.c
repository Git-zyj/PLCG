#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)42906;
short var_3 = (short)-30220;
signed char var_4 = (signed char)6;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)147;
int var_11 = -1088272522;
int zero = 0;
unsigned char var_12 = (unsigned char)28;
int var_13 = -161988209;
int var_14 = 202597848;
unsigned char var_15 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
