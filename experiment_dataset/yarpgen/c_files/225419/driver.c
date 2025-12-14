#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1911030900U;
unsigned long long int var_8 = 8801107788767304038ULL;
unsigned long long int var_9 = 9702994184774038069ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1701872556U;
unsigned short var_13 = (unsigned short)17838;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
