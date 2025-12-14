#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-74;
short var_4 = (short)11068;
signed char var_6 = (signed char)-114;
unsigned char var_7 = (unsigned char)48;
unsigned long long int var_10 = 6715590580311811055ULL;
unsigned char var_12 = (unsigned char)189;
short var_14 = (short)-3673;
int zero = 0;
unsigned char var_15 = (unsigned char)8;
unsigned long long int var_16 = 13956855620586571386ULL;
unsigned char var_17 = (unsigned char)137;
signed char var_18 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
