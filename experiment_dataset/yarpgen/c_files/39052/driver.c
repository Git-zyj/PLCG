#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23305;
short var_2 = (short)24521;
unsigned short var_3 = (unsigned short)207;
_Bool var_4 = (_Bool)1;
int var_8 = -1293779862;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 3613906007U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-5646;
signed char var_14 = (signed char)-38;
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
