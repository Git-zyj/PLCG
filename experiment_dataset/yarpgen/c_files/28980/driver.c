#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13145275049064629116ULL;
signed char var_8 = (signed char)30;
unsigned int var_9 = 3975045249U;
int var_14 = 2143946220;
short var_15 = (short)-31757;
int zero = 0;
short var_18 = (short)21869;
signed char var_19 = (signed char)109;
signed char var_20 = (signed char)37;
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
