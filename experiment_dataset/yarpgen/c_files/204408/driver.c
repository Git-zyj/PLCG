#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1076781127U;
int var_4 = -711052993;
unsigned int var_6 = 3761227188U;
int var_7 = 1218995526;
_Bool var_10 = (_Bool)1;
unsigned short var_16 = (unsigned short)4055;
signed char var_17 = (signed char)-57;
unsigned int var_19 = 1718231973U;
int zero = 0;
unsigned int var_20 = 1497303463U;
unsigned int var_21 = 1555824673U;
unsigned int var_22 = 2015039624U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
