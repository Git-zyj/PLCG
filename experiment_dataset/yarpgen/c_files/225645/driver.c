#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-98;
unsigned int var_5 = 747125153U;
unsigned char var_8 = (unsigned char)49;
int zero = 0;
short var_13 = (short)11555;
unsigned int var_14 = 1530760368U;
unsigned short var_15 = (unsigned short)38440;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
