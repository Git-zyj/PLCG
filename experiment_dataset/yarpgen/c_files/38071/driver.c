#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3447543528U;
unsigned int var_1 = 1137042874U;
unsigned int var_2 = 1850948416U;
unsigned int var_4 = 301973791U;
unsigned int var_6 = 1357382097U;
unsigned int var_7 = 186507171U;
unsigned int var_8 = 1261744848U;
unsigned int var_10 = 2335809704U;
int zero = 0;
unsigned int var_12 = 4173236108U;
unsigned int var_13 = 3219217691U;
unsigned int var_14 = 2328228975U;
unsigned int var_15 = 335059922U;
unsigned int var_16 = 4190282924U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
