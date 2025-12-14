#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15507273380217379883ULL;
signed char var_8 = (signed char)-66;
unsigned short var_11 = (unsigned short)36169;
int zero = 0;
long long int var_16 = 1058844319064890879LL;
int var_17 = -230073070;
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
