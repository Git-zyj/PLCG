#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7636016418161419245ULL;
unsigned long long int var_6 = 11387382709374659965ULL;
long long int var_7 = 2861262443728585579LL;
signed char var_8 = (signed char)16;
unsigned int var_11 = 2963674707U;
long long int var_12 = -7128601870502596889LL;
short var_13 = (short)-25810;
short var_15 = (short)2244;
unsigned int var_17 = 3799946236U;
int zero = 0;
unsigned char var_19 = (unsigned char)133;
unsigned int var_20 = 137569261U;
long long int var_21 = 8036742134707648462LL;
unsigned long long int var_22 = 7061582846486404293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
