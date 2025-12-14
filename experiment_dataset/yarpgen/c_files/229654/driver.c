#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28789;
short var_3 = (short)-21060;
unsigned int var_7 = 3996114228U;
short var_12 = (short)-18035;
int zero = 0;
unsigned int var_13 = 2421596787U;
short var_14 = (short)-6000;
void init() {
}

void checksum() {
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
