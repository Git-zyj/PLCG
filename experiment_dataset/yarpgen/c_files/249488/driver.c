#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2824858595U;
short var_3 = (short)-26069;
long long int var_4 = 2357748526586438961LL;
unsigned char var_7 = (unsigned char)192;
unsigned int var_8 = 2316229978U;
unsigned short var_10 = (unsigned short)3060;
unsigned short var_13 = (unsigned short)2529;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1897956911U;
unsigned int var_17 = 1730050598U;
unsigned long long int var_18 = 13370016799394493873ULL;
signed char var_19 = (signed char)-110;
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
