#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1796303501;
_Bool var_2 = (_Bool)1;
long long int var_3 = 1979402084718914309LL;
long long int var_7 = 4947575653773051811LL;
int zero = 0;
int var_14 = 1793288302;
long long int var_15 = -2013810030159753212LL;
void init() {
}

void checksum() {
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
