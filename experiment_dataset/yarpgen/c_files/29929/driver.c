#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 786763033;
unsigned long long int var_7 = 16400757885237238030ULL;
long long int var_8 = -1294764768875593192LL;
int var_9 = 525878681;
int zero = 0;
int var_15 = -798225332;
_Bool var_16 = (_Bool)0;
int var_17 = -460403456;
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
