#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -757200440082973412LL;
unsigned short var_4 = (unsigned short)16113;
unsigned long long int var_8 = 12978914569300539895ULL;
short var_17 = (short)23078;
int zero = 0;
signed char var_19 = (signed char)-66;
long long int var_20 = 3883457180824978455LL;
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
