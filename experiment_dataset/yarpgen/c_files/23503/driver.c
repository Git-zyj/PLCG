#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
short var_1 = (short)7598;
short var_2 = (short)14516;
signed char var_3 = (signed char)-11;
unsigned char var_6 = (unsigned char)26;
signed char var_7 = (signed char)64;
int var_8 = 941190276;
unsigned short var_9 = (unsigned short)7886;
unsigned short var_10 = (unsigned short)18017;
int zero = 0;
signed char var_11 = (signed char)70;
signed char var_12 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
