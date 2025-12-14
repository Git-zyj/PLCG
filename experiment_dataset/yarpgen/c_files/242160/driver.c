#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2913138251245699053LL;
long long int var_4 = -7206865050508731679LL;
long long int var_6 = -2711627230027657774LL;
int zero = 0;
unsigned long long int var_15 = 9332044750729174254ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
