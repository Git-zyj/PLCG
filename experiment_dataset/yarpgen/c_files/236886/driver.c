#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3195841411U;
unsigned short var_7 = (unsigned short)3413;
unsigned int var_8 = 1405631172U;
unsigned int var_13 = 1803548153U;
unsigned short var_14 = (unsigned short)30762;
int var_15 = 471056285;
unsigned int var_18 = 214168427U;
int zero = 0;
unsigned int var_19 = 2381790003U;
int var_20 = -1175058329;
void init() {
}

void checksum() {
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
