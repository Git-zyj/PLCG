#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17130305982546001792ULL;
unsigned int var_4 = 2104177382U;
int var_5 = 263251136;
unsigned long long int var_8 = 7953457272143813169ULL;
long long int var_9 = 3208416136580391982LL;
int var_13 = 54963449;
unsigned short var_14 = (unsigned short)37280;
int zero = 0;
int var_16 = -1157353199;
signed char var_17 = (signed char)119;
int var_18 = -1399366687;
int var_19 = 13109900;
unsigned int var_20 = 3225130551U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
