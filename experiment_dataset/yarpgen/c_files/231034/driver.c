#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2310265926358984007ULL;
unsigned long long int var_12 = 12125295895891847745ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 15753293079694650128ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6477375819998619030LL;
void init() {
}

void checksum() {
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
