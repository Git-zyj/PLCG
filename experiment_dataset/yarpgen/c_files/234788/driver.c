#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 111083609U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)2105;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16947884304994408805ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
