#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8764;
unsigned long long int var_1 = 1389778294638059824ULL;
short var_2 = (short)-24821;
int var_3 = 976969615;
signed char var_4 = (signed char)78;
unsigned long long int var_7 = 16802965662910522614ULL;
unsigned short var_8 = (unsigned short)32157;
short var_9 = (short)-32637;
int zero = 0;
unsigned int var_10 = 386340832U;
unsigned int var_11 = 913969766U;
long long int var_12 = -4965932718122934030LL;
unsigned short var_13 = (unsigned short)31434;
signed char var_14 = (signed char)56;
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
