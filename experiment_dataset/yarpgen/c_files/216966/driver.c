#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8640470788070968553ULL;
unsigned long long int var_6 = 2204101957974451802ULL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-30295;
int var_13 = 1978406044;
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
