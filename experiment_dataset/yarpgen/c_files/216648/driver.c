#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25438;
signed char var_4 = (signed char)94;
unsigned char var_6 = (unsigned char)13;
signed char var_7 = (signed char)-26;
unsigned short var_9 = (unsigned short)7316;
unsigned char var_11 = (unsigned char)97;
int zero = 0;
unsigned char var_12 = (unsigned char)100;
signed char var_13 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
