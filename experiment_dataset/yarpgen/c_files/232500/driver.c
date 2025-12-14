#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16739;
unsigned short var_9 = (unsigned short)9242;
long long int var_18 = -1782573088001550609LL;
int zero = 0;
unsigned long long int var_19 = 14442826332255299757ULL;
unsigned long long int var_20 = 18093239194850414578ULL;
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
