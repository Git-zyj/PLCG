#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -3804415940269513888LL;
unsigned long long int var_12 = 15585869643386747881ULL;
signed char var_14 = (signed char)120;
int zero = 0;
unsigned long long int var_15 = 2897545172170030356ULL;
unsigned long long int var_16 = 1749436755486521275ULL;
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
