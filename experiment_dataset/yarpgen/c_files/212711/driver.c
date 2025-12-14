#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2443519504103847019ULL;
unsigned long long int var_6 = 7987305427442876975ULL;
unsigned long long int var_15 = 6427326767616986673ULL;
int zero = 0;
unsigned long long int var_16 = 205815372948178505ULL;
unsigned long long int var_17 = 16657711605312593607ULL;
unsigned long long int var_18 = 13921836242744895603ULL;
unsigned long long int var_19 = 2285978008695104052ULL;
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
