#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2331342085U;
int var_1 = 1159732444;
signed char var_7 = (signed char)110;
_Bool var_9 = (_Bool)0;
long long int var_11 = -6523122699368973430LL;
int zero = 0;
unsigned short var_14 = (unsigned short)32355;
_Bool var_15 = (_Bool)0;
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
