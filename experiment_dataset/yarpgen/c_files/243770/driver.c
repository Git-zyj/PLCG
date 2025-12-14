#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8024687280170670543LL;
unsigned int var_10 = 4065287146U;
unsigned long long int var_11 = 7469363189289467851ULL;
int zero = 0;
int var_13 = 1987424620;
unsigned long long int var_14 = 15907225753090443988ULL;
void init() {
}

void checksum() {
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
