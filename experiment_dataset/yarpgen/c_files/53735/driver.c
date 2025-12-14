#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned char var_1 = (unsigned char)1;
unsigned char var_2 = (unsigned char)137;
unsigned short var_3 = (unsigned short)21528;
int var_8 = 278096969;
int zero = 0;
unsigned short var_13 = (unsigned short)43653;
signed char var_14 = (signed char)-8;
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
