#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_7 = 2959253608U;
unsigned long long int var_9 = 17011061671760905618ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 301284175624870980ULL;
unsigned long long int var_16 = 6232344593034824750ULL;
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
