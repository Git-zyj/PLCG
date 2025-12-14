#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1042904791U;
int var_3 = -1189912410;
unsigned int var_5 = 3608209570U;
unsigned int var_9 = 3080499616U;
int zero = 0;
signed char var_10 = (signed char)-30;
int var_11 = 2135291447;
int var_12 = -1704790287;
unsigned int var_13 = 607359605U;
unsigned int var_14 = 3975379565U;
int var_15 = -980620626;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
