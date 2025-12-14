#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3199995518U;
int var_8 = -1758037897;
unsigned long long int var_10 = 3356723795120047251ULL;
long long int var_12 = -8815576535828783490LL;
int zero = 0;
long long int var_13 = 7887341153514362220LL;
unsigned long long int var_14 = 5228816123602237245ULL;
unsigned long long int var_15 = 395561465538150583ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
