#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2066876941;
_Bool var_5 = (_Bool)0;
int var_9 = 936932005;
unsigned long long int var_11 = 3316374370631050778ULL;
int zero = 0;
unsigned int var_13 = 3757583364U;
short var_14 = (short)-14567;
long long int var_15 = 7435993884798825698LL;
void init() {
}

void checksum() {
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
