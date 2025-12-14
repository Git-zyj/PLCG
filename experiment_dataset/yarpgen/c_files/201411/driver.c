#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3230568875U;
unsigned short var_2 = (unsigned short)32865;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)2861;
signed char var_8 = (signed char)121;
long long int var_12 = 9175534283251403186LL;
int zero = 0;
unsigned char var_13 = (unsigned char)98;
signed char var_14 = (signed char)-120;
unsigned int var_15 = 2457722901U;
long long int var_16 = 3479559222217819507LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
