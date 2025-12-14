#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 1207836222907936802LL;
long long int var_10 = 6193528043356915220LL;
long long int var_11 = 7554890995875611745LL;
int zero = 0;
unsigned long long int var_13 = 4611914120181280394ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15670356042030868601ULL;
long long int var_16 = -4220280784979925142LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
