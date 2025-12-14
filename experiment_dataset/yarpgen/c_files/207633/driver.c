#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 217205608665260936ULL;
unsigned int var_3 = 1106985623U;
unsigned short var_5 = (unsigned short)65498;
int zero = 0;
unsigned long long int var_10 = 3336765284576472261ULL;
long long int var_11 = 1775692917494282731LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
