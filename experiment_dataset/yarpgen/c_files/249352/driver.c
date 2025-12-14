#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13077777143202969889ULL;
unsigned long long int var_7 = 4294147337989324030ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2076984652U;
int zero = 0;
unsigned short var_12 = (unsigned short)61074;
unsigned short var_13 = (unsigned short)63743;
unsigned long long int var_14 = 5763728413387910856ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
