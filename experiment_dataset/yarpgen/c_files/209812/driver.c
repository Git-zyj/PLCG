#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4508671256662575427ULL;
short var_9 = (short)-5643;
unsigned long long int var_11 = 11234108951449212861ULL;
short var_17 = (short)-12266;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1908182459;
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
