#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 682164918119259196LL;
signed char var_1 = (signed char)45;
signed char var_2 = (signed char)89;
unsigned int var_3 = 3866994493U;
unsigned long long int var_9 = 6115882079183413196ULL;
unsigned int var_10 = 2243562223U;
unsigned char var_12 = (unsigned char)231;
int zero = 0;
unsigned long long int var_13 = 17179060414613430809ULL;
short var_14 = (short)15629;
int var_15 = -496072765;
unsigned int var_16 = 2383819952U;
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
