#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned short var_1 = (unsigned short)21431;
int var_3 = 1766446992;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)40677;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)25700;
unsigned int var_13 = 397053639U;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = -144372104;
unsigned char var_17 = (unsigned char)26;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
