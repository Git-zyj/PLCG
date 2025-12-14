#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1199151216;
_Bool var_10 = (_Bool)1;
unsigned long long int var_15 = 14727304845537693605ULL;
int zero = 0;
signed char var_18 = (signed char)45;
unsigned int var_19 = 748886059U;
long long int var_20 = -7886498028948106793LL;
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
