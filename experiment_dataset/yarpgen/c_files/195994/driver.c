#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1769071516;
_Bool var_5 = (_Bool)0;
long long int var_7 = 7767620662535963565LL;
signed char var_9 = (signed char)-96;
int zero = 0;
unsigned int var_13 = 1953932705U;
int var_14 = 1649354391;
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
