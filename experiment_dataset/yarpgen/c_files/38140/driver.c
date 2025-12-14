#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13164;
signed char var_5 = (signed char)-79;
short var_9 = (short)26586;
int zero = 0;
unsigned char var_10 = (unsigned char)248;
unsigned short var_11 = (unsigned short)17363;
unsigned int var_12 = 932231208U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
