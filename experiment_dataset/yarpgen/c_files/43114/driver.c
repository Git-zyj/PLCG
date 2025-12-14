#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned int var_2 = 3390700233U;
long long int var_8 = -9176713544836449657LL;
int var_10 = 1078011279;
unsigned short var_11 = (unsigned short)16678;
long long int var_12 = 2395491762059213375LL;
int zero = 0;
unsigned long long int var_13 = 18313382644417174019ULL;
unsigned int var_14 = 3068072874U;
long long int var_15 = -2247491903572249072LL;
unsigned int var_16 = 3860289545U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
