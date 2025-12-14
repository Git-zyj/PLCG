#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)149;
short var_7 = (short)31841;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3494681068U;
unsigned short var_10 = (unsigned short)51782;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)77;
unsigned int var_13 = 2227839165U;
signed char var_14 = (signed char)104;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 1793089861045237540ULL;
unsigned short var_17 = (unsigned short)202;
int var_18 = 40238290;
unsigned int var_19 = 1492475735U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
