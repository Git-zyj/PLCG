#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9162044638107233284LL;
unsigned long long int var_3 = 7444041847462459668ULL;
unsigned char var_8 = (unsigned char)106;
unsigned long long int var_10 = 1031908664993345549ULL;
unsigned char var_11 = (unsigned char)234;
unsigned long long int var_12 = 14981229268859623342ULL;
int zero = 0;
long long int var_14 = -5826170451103795240LL;
unsigned int var_15 = 1642113217U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
