#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 504522493;
int var_4 = -574716161;
long long int var_5 = 6799262008741276273LL;
long long int var_6 = 4360158280966796784LL;
long long int var_9 = 4790016040019972674LL;
long long int var_11 = 1037737313311652588LL;
long long int var_12 = 2418631879626682514LL;
int zero = 0;
long long int var_14 = 1019903800650955236LL;
long long int var_15 = 7453529535135315018LL;
long long int var_16 = -2565848385269758359LL;
long long int var_17 = 6656902762844381233LL;
long long int var_18 = -5118064877072604034LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
