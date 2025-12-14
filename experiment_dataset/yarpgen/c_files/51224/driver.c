#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30691;
int var_2 = 1266435139;
signed char var_5 = (signed char)101;
signed char var_7 = (signed char)-115;
unsigned long long int var_8 = 6936361438714653880ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-17;
int zero = 0;
unsigned char var_12 = (unsigned char)179;
short var_13 = (short)-24399;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
