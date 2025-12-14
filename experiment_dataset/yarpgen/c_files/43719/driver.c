#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1203254887588991571LL;
unsigned int var_11 = 1917117528U;
int zero = 0;
unsigned int var_14 = 1384425635U;
unsigned long long int var_15 = 5899725233781374545ULL;
signed char var_16 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
