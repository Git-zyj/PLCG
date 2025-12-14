#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 526670869U;
unsigned int var_4 = 1088937831U;
unsigned int var_6 = 2373229193U;
unsigned long long int var_8 = 5572460295916115024ULL;
unsigned char var_12 = (unsigned char)153;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)56307;
signed char var_17 = (signed char)127;
int zero = 0;
unsigned char var_18 = (unsigned char)183;
unsigned short var_19 = (unsigned short)18409;
unsigned char var_20 = (unsigned char)108;
unsigned short var_21 = (unsigned short)30812;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
