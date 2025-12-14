#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3767733985U;
int var_1 = -119527816;
signed char var_2 = (signed char)-64;
short var_3 = (short)-16907;
short var_5 = (short)31189;
int var_7 = -1781608819;
unsigned int var_8 = 4133977685U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)118;
int var_11 = -2091549288;
short var_12 = (short)11155;
int var_13 = 1920443848;
long long int var_14 = 5090219534528326LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
