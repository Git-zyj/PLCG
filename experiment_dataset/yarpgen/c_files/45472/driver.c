#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1636508338;
long long int var_11 = 9073964154189643500LL;
int zero = 0;
unsigned long long int var_20 = 13982507441099608233ULL;
unsigned long long int var_21 = 13783250363943464799ULL;
unsigned long long int var_22 = 5036577860942636918ULL;
long long int var_23 = 6073073032800184953LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
