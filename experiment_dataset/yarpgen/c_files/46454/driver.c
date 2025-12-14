#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5160995631653312755LL;
unsigned int var_6 = 1375686409U;
unsigned int var_12 = 1386266931U;
unsigned int var_14 = 1863644088U;
long long int var_15 = 5389037555666820067LL;
int zero = 0;
long long int var_16 = 5723108344906816367LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
