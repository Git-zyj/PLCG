#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53607;
unsigned short var_9 = (unsigned short)18461;
long long int var_11 = -7472794086861845669LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3376508079U;
unsigned long long int var_16 = 10219601112277752924ULL;
long long int var_17 = 7215623745745140248LL;
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
