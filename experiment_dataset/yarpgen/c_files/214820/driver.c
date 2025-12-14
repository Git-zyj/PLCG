#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28547;
unsigned char var_5 = (unsigned char)164;
short var_6 = (short)-31399;
short var_7 = (short)-19853;
unsigned char var_8 = (unsigned char)90;
int zero = 0;
short var_10 = (short)-27249;
short var_11 = (short)-922;
short var_12 = (short)20432;
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
