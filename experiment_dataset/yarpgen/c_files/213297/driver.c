#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 132600400U;
short var_8 = (short)7029;
unsigned int var_9 = 2732110795U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 6494661220787570878ULL;
unsigned char var_15 = (unsigned char)122;
int zero = 0;
unsigned long long int var_17 = 12397590610918639513ULL;
unsigned long long int var_18 = 14256677220379098860ULL;
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
