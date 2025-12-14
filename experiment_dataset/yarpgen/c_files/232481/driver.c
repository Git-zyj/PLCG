#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23590;
signed char var_4 = (signed char)-69;
signed char var_6 = (signed char)-41;
signed char var_7 = (signed char)-90;
short var_8 = (short)12913;
unsigned long long int var_9 = 13995004606797736195ULL;
int zero = 0;
signed char var_10 = (signed char)37;
long long int var_11 = -3228748015455788315LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
