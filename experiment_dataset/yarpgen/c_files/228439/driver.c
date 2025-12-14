#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -492225803;
long long int var_4 = -3209800716024561906LL;
unsigned int var_5 = 1201535428U;
_Bool var_9 = (_Bool)0;
int var_15 = -83997579;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2284160126045020236LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
