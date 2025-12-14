#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9005143085180212787LL;
int var_8 = 1600698299;
unsigned long long int var_10 = 1908505768330768682ULL;
int zero = 0;
int var_12 = -1874195585;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8632409589810105957LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
