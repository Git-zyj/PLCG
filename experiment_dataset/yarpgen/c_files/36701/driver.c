#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 384490437;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 5284495004053431975ULL;
unsigned long long int var_9 = 14112486991200206198ULL;
int var_10 = 130849673;
unsigned long long int var_11 = 11944770261903491389ULL;
int zero = 0;
long long int var_12 = -8998988694669591881LL;
long long int var_13 = 2684639650400463618LL;
signed char var_14 = (signed char)105;
unsigned int var_15 = 1642551222U;
void init() {
}

void checksum() {
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
