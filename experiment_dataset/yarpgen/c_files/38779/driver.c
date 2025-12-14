#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -353918610;
_Bool var_2 = (_Bool)1;
int var_6 = 1714684236;
int var_7 = -1983187123;
int var_9 = 1570987661;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1322091970;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
