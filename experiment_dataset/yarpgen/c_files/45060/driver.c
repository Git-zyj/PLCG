#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11963;
short var_7 = (short)5705;
unsigned short var_10 = (unsigned short)62686;
unsigned int var_12 = 76864537U;
int zero = 0;
unsigned short var_15 = (unsigned short)52317;
unsigned char var_16 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
