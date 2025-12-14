#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1482373230U;
int var_8 = -533089559;
unsigned long long int var_9 = 6534838934287472432ULL;
int zero = 0;
short var_15 = (short)18808;
unsigned short var_16 = (unsigned short)40705;
long long int var_17 = 6382981278464467202LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
