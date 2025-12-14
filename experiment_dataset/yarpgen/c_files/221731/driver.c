#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned short var_1 = (unsigned short)36574;
unsigned int var_4 = 1419220453U;
unsigned long long int var_13 = 2387216757537380967ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)32988;
unsigned long long int var_16 = 14937581771714700001ULL;
long long int var_17 = 1744954583931134801LL;
long long int var_18 = 7911862062145025648LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
