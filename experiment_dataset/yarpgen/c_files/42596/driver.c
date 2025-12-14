#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8330846313703903304LL;
short var_2 = (short)15736;
unsigned long long int var_5 = 16604214772889237872ULL;
unsigned long long int var_6 = 2024081349032416718ULL;
unsigned long long int var_10 = 15984725501860362804ULL;
signed char var_14 = (signed char)38;
short var_16 = (short)15865;
int zero = 0;
unsigned long long int var_17 = 13616641463601408614ULL;
unsigned long long int var_18 = 3651962654046259841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
