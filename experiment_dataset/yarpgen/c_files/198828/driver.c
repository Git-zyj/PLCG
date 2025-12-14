#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26953;
unsigned char var_3 = (unsigned char)165;
int var_4 = 1858179478;
int var_11 = -1570634884;
signed char var_12 = (signed char)125;
signed char var_14 = (signed char)107;
int zero = 0;
signed char var_15 = (signed char)-19;
unsigned short var_16 = (unsigned short)38038;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-52;
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
