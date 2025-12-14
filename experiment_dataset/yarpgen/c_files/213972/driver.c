#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25514;
short var_1 = (short)-15679;
short var_3 = (short)20395;
unsigned short var_6 = (unsigned short)33354;
unsigned short var_7 = (unsigned short)12491;
unsigned short var_9 = (unsigned short)41984;
short var_10 = (short)14231;
int zero = 0;
unsigned short var_11 = (unsigned short)50764;
unsigned short var_12 = (unsigned short)49488;
unsigned char var_13 = (unsigned char)243;
unsigned char var_14 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
