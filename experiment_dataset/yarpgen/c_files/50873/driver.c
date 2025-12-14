#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28261;
unsigned short var_1 = (unsigned short)29921;
unsigned long long int var_2 = 17109345670639376982ULL;
unsigned long long int var_3 = 11613611571444678112ULL;
unsigned long long int var_5 = 13061805889032084861ULL;
unsigned long long int var_7 = 13674321427135512807ULL;
unsigned short var_8 = (unsigned short)56109;
long long int var_9 = -4012284215281285482LL;
long long int var_10 = 8399040359321546966LL;
unsigned short var_11 = (unsigned short)12262;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)72;
unsigned int var_14 = 2628773265U;
int zero = 0;
int var_15 = -2023691043;
signed char var_16 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
