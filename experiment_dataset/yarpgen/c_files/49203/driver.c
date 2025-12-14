#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2208307702U;
unsigned int var_8 = 2947513140U;
unsigned int var_10 = 3362046203U;
unsigned int var_15 = 1689641486U;
unsigned int var_18 = 2497005684U;
int zero = 0;
int var_19 = -1707855856;
signed char var_20 = (signed char)-70;
void init() {
}

void checksum() {
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
