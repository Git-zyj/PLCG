#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21189;
unsigned short var_4 = (unsigned short)52662;
short var_5 = (short)-27234;
unsigned short var_10 = (unsigned short)44239;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
unsigned short var_18 = (unsigned short)49012;
short var_19 = (short)-15362;
unsigned short var_20 = (unsigned short)41132;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
