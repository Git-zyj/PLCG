#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8926813599161439767ULL;
unsigned long long int var_2 = 973346505616323815ULL;
unsigned long long int var_10 = 15712723845364299551ULL;
int zero = 0;
int var_11 = 189503182;
short var_12 = (short)-6807;
void init() {
}

void checksum() {
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
