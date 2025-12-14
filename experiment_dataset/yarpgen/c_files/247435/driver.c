#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21510;
unsigned char var_2 = (unsigned char)188;
short var_4 = (short)-15450;
short var_7 = (short)-25759;
short var_8 = (short)-27628;
unsigned char var_9 = (unsigned char)191;
unsigned long long int var_10 = 15123967449450835016ULL;
unsigned char var_11 = (unsigned char)241;
unsigned int var_12 = 1571443641U;
unsigned int var_13 = 2135751500U;
short var_15 = (short)-26692;
unsigned short var_19 = (unsigned short)21187;
int zero = 0;
short var_20 = (short)395;
unsigned int var_21 = 558225624U;
void init() {
}

void checksum() {
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
