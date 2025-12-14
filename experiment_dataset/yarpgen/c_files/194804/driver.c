#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20365;
unsigned int var_5 = 975890470U;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-1547;
short var_11 = (short)-29796;
unsigned char var_12 = (unsigned char)115;
int zero = 0;
unsigned short var_13 = (unsigned short)41125;
unsigned long long int var_14 = 12876565103034773812ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-33;
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
