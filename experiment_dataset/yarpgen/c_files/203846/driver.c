#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8422;
signed char var_5 = (signed char)98;
int var_6 = 536723198;
unsigned int var_7 = 627089518U;
signed char var_13 = (signed char)-1;
int zero = 0;
short var_17 = (short)-29203;
unsigned char var_18 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
