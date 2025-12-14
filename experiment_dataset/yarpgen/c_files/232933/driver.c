#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7016968873421450130LL;
unsigned short var_9 = (unsigned short)14780;
unsigned int var_14 = 30478904U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 888277168U;
void init() {
}

void checksum() {
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
