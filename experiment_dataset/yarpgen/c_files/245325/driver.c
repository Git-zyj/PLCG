#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4833683652856985009LL;
unsigned short var_4 = (unsigned short)20826;
int var_6 = -1182163707;
long long int var_7 = -3363060879748277637LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4342684996903437411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
