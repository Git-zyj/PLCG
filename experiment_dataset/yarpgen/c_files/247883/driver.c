#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 399671600U;
int var_3 = 1360925659;
int var_4 = -674093782;
unsigned char var_5 = (unsigned char)240;
signed char var_7 = (signed char)12;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 666318695U;
unsigned char var_14 = (unsigned char)153;
short var_15 = (short)-18508;
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
