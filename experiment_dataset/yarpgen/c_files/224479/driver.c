#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8144639997717055011LL;
long long int var_4 = -4638626557814372778LL;
long long int var_9 = -2636062371430396569LL;
int zero = 0;
long long int var_15 = -2026883219676750290LL;
long long int var_16 = -7831392192321745158LL;
long long int var_17 = -7715108878999793274LL;
long long int var_18 = 94697310876198430LL;
long long int var_19 = -6932193612349522856LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
