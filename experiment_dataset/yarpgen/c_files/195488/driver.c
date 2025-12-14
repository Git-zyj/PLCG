#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9521431758982890808ULL;
unsigned long long int var_9 = 961646269496571737ULL;
int var_10 = -29264455;
int zero = 0;
int var_15 = -1526604772;
unsigned long long int var_16 = 7426966171426483128ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
