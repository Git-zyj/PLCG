#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)38336;
int var_2 = 1745098078;
short var_4 = (short)-28951;
short var_11 = (short)-20043;
signed char var_12 = (signed char)-30;
short var_13 = (short)-27260;
unsigned int var_15 = 718150837U;
int zero = 0;
unsigned long long int var_18 = 5384750629535181362ULL;
unsigned long long int var_19 = 1808330422366763364ULL;
signed char var_20 = (signed char)62;
void init() {
}

void checksum() {
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
