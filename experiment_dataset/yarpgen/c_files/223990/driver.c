#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2508501956U;
signed char var_1 = (signed char)23;
int var_3 = -1210463298;
unsigned short var_5 = (unsigned short)31722;
unsigned int var_7 = 598004621U;
unsigned long long int var_10 = 2619676468346948332ULL;
long long int var_12 = -4877934641416031045LL;
int zero = 0;
short var_14 = (short)30933;
short var_15 = (short)7894;
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
