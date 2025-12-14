#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8477017254681211045ULL;
unsigned long long int var_14 = 6363906579917605984ULL;
unsigned long long int var_15 = 554626550790819884ULL;
int zero = 0;
long long int var_16 = -1744107633223316272LL;
int var_17 = 737867669;
long long int var_18 = 1230516173325019543LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
