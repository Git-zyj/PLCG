#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 310626221U;
unsigned long long int var_3 = 13532569425802017850ULL;
signed char var_10 = (signed char)-94;
long long int var_12 = 5038856833905425183LL;
int zero = 0;
unsigned int var_13 = 2427195135U;
signed char var_14 = (signed char)3;
int var_15 = 171316099;
long long int var_16 = -5963747148537973462LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
