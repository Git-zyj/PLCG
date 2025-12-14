#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5875;
short var_9 = (short)31020;
unsigned long long int var_11 = 7046985886753712873ULL;
unsigned short var_15 = (unsigned short)51100;
unsigned int var_17 = 3590635079U;
int zero = 0;
long long int var_18 = -9070611805475016522LL;
long long int var_19 = 7415198356403717819LL;
long long int var_20 = -3470237662962863006LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
