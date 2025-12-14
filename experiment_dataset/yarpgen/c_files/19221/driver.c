#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -683139066;
int var_2 = -1263047696;
int var_5 = -832013878;
long long int var_7 = -8105809771932926926LL;
int zero = 0;
long long int var_12 = -7020526635002264968LL;
long long int var_13 = 878661801384379682LL;
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
