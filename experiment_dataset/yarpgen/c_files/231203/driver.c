#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)103;
int var_5 = -458076527;
_Bool var_10 = (_Bool)1;
long long int var_17 = -1815882697843076172LL;
int zero = 0;
int var_19 = -1676392385;
unsigned long long int var_20 = 2738401586980270949ULL;
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
