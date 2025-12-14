#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -210176636;
unsigned int var_6 = 2876217450U;
unsigned int var_14 = 875125793U;
int var_16 = -504706838;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 99508584075821195LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
