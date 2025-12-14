#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22364;
int var_7 = 561734742;
short var_9 = (short)-6677;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4074671618450165444ULL;
short var_14 = (short)13092;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
