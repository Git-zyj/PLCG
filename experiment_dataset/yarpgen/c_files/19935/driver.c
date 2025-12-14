#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3025;
unsigned char var_1 = (unsigned char)231;
_Bool var_2 = (_Bool)1;
int var_4 = 264476987;
unsigned char var_5 = (unsigned char)56;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 8312713078656892894ULL;
unsigned long long int var_15 = 8242372325152911439ULL;
int var_16 = 329620780;
int zero = 0;
unsigned short var_18 = (unsigned short)43342;
unsigned long long int var_19 = 14294430781845976566ULL;
signed char var_20 = (signed char)74;
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
