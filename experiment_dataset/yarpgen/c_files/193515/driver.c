#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_8 = 120458252;
unsigned long long int var_9 = 16009721051783103966ULL;
int zero = 0;
long long int var_13 = -3131222648803587562LL;
long long int var_14 = 1315375701688853985LL;
long long int var_15 = 7852146043174485996LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
