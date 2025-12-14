#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)87;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 8683826518636700760ULL;
unsigned short var_11 = (unsigned short)59572;
signed char var_13 = (signed char)57;
unsigned int var_16 = 590663700U;
int var_17 = 2082979720;
int zero = 0;
unsigned long long int var_18 = 9378590629778810096ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-5254;
unsigned int var_21 = 1448640991U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
