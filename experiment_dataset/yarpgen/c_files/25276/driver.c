#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
int var_2 = -282650199;
signed char var_4 = (signed char)107;
unsigned long long int var_6 = 12185493611320314408ULL;
unsigned long long int var_8 = 1306514617151341317ULL;
int zero = 0;
signed char var_10 = (signed char)118;
signed char var_11 = (signed char)-23;
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
