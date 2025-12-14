#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1492443173556210355LL;
signed char var_2 = (signed char)83;
int var_4 = 683390448;
signed char var_7 = (signed char)61;
long long int var_10 = -8379965898740110060LL;
unsigned long long int var_11 = 1710322730836049938ULL;
int var_13 = -684685873;
int zero = 0;
int var_15 = -2113118109;
unsigned char var_16 = (unsigned char)38;
int var_17 = -812281675;
int var_18 = -1421533135;
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
