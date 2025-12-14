#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17158446035472942284ULL;
int var_4 = -1691116075;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2862727132U;
unsigned short var_8 = (unsigned short)38889;
long long int var_9 = -6651255527352722740LL;
int zero = 0;
signed char var_13 = (signed char)81;
long long int var_14 = -3591526223216082091LL;
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
