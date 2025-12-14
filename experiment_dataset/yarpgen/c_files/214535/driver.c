#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 735034278U;
signed char var_2 = (signed char)-77;
signed char var_4 = (signed char)-31;
signed char var_5 = (signed char)65;
unsigned short var_8 = (unsigned short)53768;
unsigned int var_10 = 3036035940U;
int var_12 = -1762490029;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
short var_14 = (short)-20796;
unsigned char var_15 = (unsigned char)87;
unsigned int var_16 = 1923787282U;
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
