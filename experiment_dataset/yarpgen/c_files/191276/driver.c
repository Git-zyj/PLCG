#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8117274630271662284ULL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_18 = (short)-3427;
long long int var_19 = -7148902426267026230LL;
long long int var_20 = -4628914194172333060LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
