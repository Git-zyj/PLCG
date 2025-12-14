#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 13553134724756783640ULL;
unsigned long long int var_9 = 17220315719700066596ULL;
int var_15 = 1700669220;
int zero = 0;
long long int var_17 = 7408287349188511211LL;
unsigned long long int var_18 = 13361698781976878771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
