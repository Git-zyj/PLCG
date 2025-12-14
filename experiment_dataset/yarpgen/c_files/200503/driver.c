#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7873925355471570652ULL;
signed char var_7 = (signed char)34;
unsigned long long int var_15 = 4973877404840253716ULL;
int zero = 0;
short var_18 = (short)-2140;
short var_19 = (short)-22335;
void init() {
}

void checksum() {
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
