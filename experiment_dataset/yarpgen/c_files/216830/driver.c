#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6899507235614350806ULL;
unsigned int var_2 = 1921734316U;
short var_7 = (short)17240;
unsigned int var_9 = 2905032920U;
int zero = 0;
unsigned long long int var_10 = 11733332380625662329ULL;
unsigned long long int var_11 = 14761357384438617150ULL;
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
