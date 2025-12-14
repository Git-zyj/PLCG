#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7008871248918089884ULL;
unsigned int var_3 = 5849303U;
short var_5 = (short)15689;
unsigned int var_6 = 2759972717U;
unsigned char var_8 = (unsigned char)38;
int var_10 = 1083692305;
signed char var_11 = (signed char)32;
int var_14 = 592871240;
int zero = 0;
unsigned short var_16 = (unsigned short)38999;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)70;
signed char var_19 = (signed char)-57;
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
