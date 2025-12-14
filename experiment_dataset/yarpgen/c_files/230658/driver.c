#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -2992691272344337452LL;
int var_5 = 464926868;
unsigned long long int var_9 = 2866674936579446933ULL;
int zero = 0;
signed char var_10 = (signed char)-3;
unsigned long long int var_11 = 369868156936180574ULL;
long long int var_12 = 6865059587324239363LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
