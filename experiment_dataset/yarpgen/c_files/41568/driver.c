#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15796;
unsigned short var_4 = (unsigned short)46133;
signed char var_5 = (signed char)80;
unsigned long long int var_6 = 8746438555682658863ULL;
unsigned char var_8 = (unsigned char)168;
signed char var_9 = (signed char)87;
unsigned short var_10 = (unsigned short)7086;
signed char var_11 = (signed char)43;
int zero = 0;
signed char var_14 = (signed char)-3;
unsigned short var_15 = (unsigned short)37106;
short var_16 = (short)14619;
short var_17 = (short)-27591;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
