#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15030;
unsigned int var_2 = 564535809U;
unsigned int var_3 = 4213943792U;
signed char var_5 = (signed char)0;
int var_7 = -1660691773;
signed char var_8 = (signed char)-59;
short var_12 = (short)30983;
int zero = 0;
long long int var_13 = -5070755673953655770LL;
unsigned short var_14 = (unsigned short)34726;
signed char var_15 = (signed char)-26;
unsigned short var_16 = (unsigned short)54464;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
