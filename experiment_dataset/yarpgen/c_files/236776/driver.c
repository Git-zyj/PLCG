#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2101395302324586249LL;
unsigned short var_6 = (unsigned short)57042;
long long int var_10 = 638859249050035999LL;
int zero = 0;
unsigned long long int var_12 = 204022887942640579ULL;
long long int var_13 = 637842178123881538LL;
void init() {
}

void checksum() {
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
