#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -100341193;
unsigned int var_12 = 343248969U;
unsigned short var_17 = (unsigned short)26400;
int zero = 0;
int var_18 = -2009319490;
unsigned long long int var_19 = 9441746728872987868ULL;
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
