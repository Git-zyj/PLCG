#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8420385119233949223LL;
unsigned long long int var_4 = 5449530427447218848ULL;
int zero = 0;
long long int var_15 = 5453660025500076009LL;
unsigned long long int var_16 = 13379401538408733681ULL;
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
