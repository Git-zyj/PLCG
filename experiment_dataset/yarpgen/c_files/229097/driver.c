#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6071872379009888202LL;
int zero = 0;
long long int var_16 = -5686957872570637631LL;
long long int var_17 = -7524420188689718702LL;
unsigned long long int var_18 = 3320922299345388745ULL;
long long int var_19 = 5419360675240059752LL;
void init() {
}

void checksum() {
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
