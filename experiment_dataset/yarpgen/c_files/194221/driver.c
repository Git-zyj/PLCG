#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 890692750;
unsigned long long int var_3 = 15208791536819776546ULL;
int var_4 = 1249631695;
long long int var_9 = -4979561741968489604LL;
int zero = 0;
signed char var_11 = (signed char)28;
signed char var_12 = (signed char)54;
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
