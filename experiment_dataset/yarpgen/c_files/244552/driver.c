#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2986304061U;
int var_2 = 471487368;
unsigned long long int var_3 = 13870079209850061245ULL;
unsigned short var_4 = (unsigned short)24285;
signed char var_7 = (signed char)-92;
unsigned char var_9 = (unsigned char)115;
short var_10 = (short)13010;
int var_12 = -163497254;
long long int var_14 = 8932764467104796657LL;
long long int var_15 = 4621261491523669596LL;
unsigned int var_16 = 1029902825U;
int zero = 0;
long long int var_18 = -7596846262730330946LL;
unsigned short var_19 = (unsigned short)14520;
int var_20 = 1755914445;
signed char var_21 = (signed char)-81;
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
