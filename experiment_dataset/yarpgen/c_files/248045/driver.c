#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -155772645;
int var_1 = -1156810677;
unsigned long long int var_2 = 7396501760554450505ULL;
unsigned long long int var_3 = 6973892142116281657ULL;
int var_4 = 239208067;
int var_5 = 587637502;
unsigned int var_6 = 2770300505U;
short var_7 = (short)-16655;
unsigned short var_8 = (unsigned short)35881;
unsigned int var_9 = 3383847714U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)38;
unsigned int var_13 = 3282352467U;
signed char var_14 = (signed char)50;
void init() {
}

void checksum() {
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
