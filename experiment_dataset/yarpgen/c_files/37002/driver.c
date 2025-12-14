#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)97;
signed char var_10 = (signed char)53;
unsigned int var_11 = 3657260380U;
int var_14 = 68686017;
unsigned int var_15 = 4110779859U;
unsigned int var_16 = 3464299050U;
unsigned int var_17 = 3743270183U;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)18839;
short var_20 = (short)15818;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
