#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -633567609;
signed char var_4 = (signed char)-126;
unsigned int var_7 = 777326435U;
unsigned char var_9 = (unsigned char)213;
int zero = 0;
signed char var_12 = (signed char)55;
unsigned short var_13 = (unsigned short)98;
unsigned short var_14 = (unsigned short)34736;
unsigned short var_15 = (unsigned short)14473;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
