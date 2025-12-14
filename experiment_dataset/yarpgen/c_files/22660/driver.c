#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2158189502574964749LL;
long long int var_2 = 6481860049637710279LL;
unsigned int var_6 = 3226953431U;
int var_8 = -1007290884;
unsigned long long int var_9 = 11521671788564761937ULL;
int zero = 0;
int var_10 = 1113546837;
unsigned short var_11 = (unsigned short)16500;
long long int var_12 = 1376032516048539518LL;
int var_13 = 1412634330;
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
