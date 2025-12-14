#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1416;
signed char var_2 = (signed char)92;
short var_4 = (short)4986;
signed char var_6 = (signed char)52;
short var_8 = (short)-18167;
signed char var_9 = (signed char)-123;
unsigned long long int var_10 = 907938658841886072ULL;
short var_11 = (short)11421;
int zero = 0;
signed char var_13 = (signed char)124;
unsigned short var_14 = (unsigned short)41407;
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
