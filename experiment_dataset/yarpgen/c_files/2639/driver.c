#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24587;
short var_3 = (short)-6692;
unsigned char var_4 = (unsigned char)145;
unsigned short var_5 = (unsigned short)4884;
signed char var_9 = (signed char)35;
signed char var_12 = (signed char)-92;
signed char var_13 = (signed char)-91;
int zero = 0;
unsigned int var_20 = 3539757854U;
signed char var_21 = (signed char)-45;
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
