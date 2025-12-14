#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1065276069;
signed char var_8 = (signed char)-61;
unsigned short var_13 = (unsigned short)15742;
unsigned short var_18 = (unsigned short)28823;
int zero = 0;
unsigned long long int var_20 = 9340342160599955683ULL;
unsigned int var_21 = 422498300U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
