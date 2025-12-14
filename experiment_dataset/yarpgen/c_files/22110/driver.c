#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11464498155910975037ULL;
int var_2 = -286496027;
unsigned long long int var_4 = 1668624263562766633ULL;
_Bool var_6 = (_Bool)0;
short var_9 = (short)19616;
int zero = 0;
unsigned long long int var_15 = 2093623494312409720ULL;
unsigned int var_16 = 3490514832U;
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
