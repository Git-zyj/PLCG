#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1039781238;
_Bool var_8 = (_Bool)0;
short var_10 = (short)31302;
unsigned short var_11 = (unsigned short)12236;
unsigned short var_12 = (unsigned short)34782;
signed char var_19 = (signed char)-68;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
signed char var_21 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
