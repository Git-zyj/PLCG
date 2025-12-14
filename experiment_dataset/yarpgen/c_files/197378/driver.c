#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 1600892554436578788LL;
signed char var_9 = (signed char)-45;
signed char var_11 = (signed char)7;
int var_13 = 271035450;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7908924330804994060LL;
void init() {
}

void checksum() {
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
