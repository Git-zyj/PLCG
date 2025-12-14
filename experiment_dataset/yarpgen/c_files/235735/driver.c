#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_10 = -679518790196680521LL;
unsigned long long int var_12 = 17675512139309744356ULL;
int zero = 0;
unsigned long long int var_14 = 4603311854388648107ULL;
short var_15 = (short)-31324;
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
