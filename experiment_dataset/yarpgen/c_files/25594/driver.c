#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 829139389759664591ULL;
unsigned int var_6 = 213490030U;
long long int var_7 = 3404057119202326886LL;
long long int var_8 = -8819497965754238697LL;
long long int var_15 = 4346317244315214874LL;
int zero = 0;
unsigned char var_18 = (unsigned char)175;
long long int var_19 = 3656610734352131914LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
