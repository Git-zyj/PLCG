#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49224;
int var_1 = -1039729004;
int var_3 = -1819576639;
unsigned char var_4 = (unsigned char)69;
short var_7 = (short)-364;
signed char var_9 = (signed char)-125;
int zero = 0;
unsigned short var_11 = (unsigned short)18418;
unsigned short var_12 = (unsigned short)21455;
short var_13 = (short)-12364;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
