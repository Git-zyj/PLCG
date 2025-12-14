#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11008;
signed char var_8 = (signed char)56;
short var_10 = (short)-27602;
unsigned int var_12 = 2107062193U;
unsigned short var_15 = (unsigned short)47463;
int zero = 0;
unsigned short var_17 = (unsigned short)2700;
unsigned char var_18 = (unsigned char)196;
unsigned long long int var_19 = 9529342429761163826ULL;
short var_20 = (short)-1341;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
