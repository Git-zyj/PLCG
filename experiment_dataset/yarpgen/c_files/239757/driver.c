#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8682460477120927007ULL;
unsigned long long int var_2 = 12249690894650511301ULL;
long long int var_3 = 2977278693673613227LL;
long long int var_13 = 1688700720316053118LL;
int zero = 0;
unsigned long long int var_20 = 8908929080184213431ULL;
long long int var_21 = -6531000912087843798LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
