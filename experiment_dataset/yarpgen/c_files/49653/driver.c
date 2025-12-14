#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1038;
unsigned short var_2 = (unsigned short)43749;
unsigned int var_3 = 2306820905U;
short var_4 = (short)-27087;
unsigned long long int var_6 = 11112724758791473373ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)26233;
unsigned int var_11 = 3785027521U;
unsigned short var_12 = (unsigned short)45174;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
