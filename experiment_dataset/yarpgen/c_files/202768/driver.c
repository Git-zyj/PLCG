#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2171382243U;
unsigned int var_3 = 658303224U;
unsigned long long int var_5 = 14697929246625990980ULL;
short var_8 = (short)-25111;
unsigned short var_14 = (unsigned short)40179;
unsigned long long int var_16 = 142299239334747324ULL;
signed char var_18 = (signed char)59;
int zero = 0;
signed char var_19 = (signed char)17;
int var_20 = -1232512687;
unsigned int var_21 = 3050027240U;
short var_22 = (short)9378;
unsigned int var_23 = 3600226492U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
