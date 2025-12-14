#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10207;
unsigned short var_5 = (unsigned short)22300;
signed char var_6 = (signed char)106;
unsigned int var_7 = 787102867U;
int zero = 0;
unsigned int var_11 = 2041593598U;
short var_12 = (short)26234;
short var_13 = (short)-13800;
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
