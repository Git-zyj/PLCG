#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
unsigned long long int var_2 = 9955124812976593299ULL;
unsigned int var_3 = 3434194059U;
unsigned long long int var_5 = 13133238456483654116ULL;
unsigned int var_6 = 1560626632U;
signed char var_7 = (signed char)48;
int zero = 0;
short var_10 = (short)-25374;
int var_11 = -1626580437;
long long int var_12 = -6697961813095500312LL;
unsigned long long int var_13 = 6031580388385226023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
