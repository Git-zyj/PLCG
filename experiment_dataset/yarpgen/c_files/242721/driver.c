#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3364286991320708143LL;
long long int var_7 = -5127654298605136713LL;
unsigned long long int var_15 = 16388427581456020240ULL;
short var_17 = (short)-24393;
long long int var_18 = 6925509726132242523LL;
int zero = 0;
unsigned int var_19 = 1418649160U;
int var_20 = 1752931118;
void init() {
}

void checksum() {
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
