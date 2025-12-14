#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7045019536964878388LL;
unsigned long long int var_6 = 4928003488930450261ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -4274792449466748041LL;
int var_14 = -1270612136;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
