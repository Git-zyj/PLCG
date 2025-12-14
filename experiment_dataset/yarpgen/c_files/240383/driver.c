#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4878674882133345995ULL;
int zero = 0;
int var_13 = -59775492;
long long int var_14 = -8381535321873844071LL;
unsigned short var_15 = (unsigned short)47421;
unsigned long long int var_16 = 7411023700914154625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
