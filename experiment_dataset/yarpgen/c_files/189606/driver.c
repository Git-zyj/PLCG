#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5857237263498170259LL;
unsigned long long int var_4 = 13506805609152447661ULL;
unsigned int var_6 = 2677579104U;
long long int var_13 = -2052592535536361059LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 1860581626202646015ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
