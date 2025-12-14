#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4781774233122206007ULL;
long long int var_3 = 5950435564085245064LL;
long long int var_4 = 2807825540490545126LL;
int var_7 = -1910288491;
short var_9 = (short)-28282;
int zero = 0;
unsigned long long int var_10 = 14655143919543220059ULL;
long long int var_11 = -8851340122642279333LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
