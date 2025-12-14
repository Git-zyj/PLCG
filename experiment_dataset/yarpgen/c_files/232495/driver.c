#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2151536072462491016ULL;
long long int var_5 = 4336065162341840998LL;
unsigned int var_14 = 437553146U;
unsigned short var_15 = (unsigned short)6944;
int zero = 0;
unsigned int var_16 = 1513218388U;
unsigned long long int var_17 = 9063973456780507504ULL;
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
