#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6589559816061257734LL;
short var_5 = (short)23910;
short var_8 = (short)-4740;
unsigned long long int var_14 = 5544125352539526600ULL;
int zero = 0;
long long int var_18 = -1892296790907730112LL;
unsigned char var_19 = (unsigned char)152;
long long int var_20 = -5629477321915598640LL;
int var_21 = 202258013;
long long int var_22 = -2798708944756773023LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
