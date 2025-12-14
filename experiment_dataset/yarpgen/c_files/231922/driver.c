#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 402898316U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1806628224U;
signed char var_11 = (signed char)-68;
int zero = 0;
unsigned long long int var_13 = 6137036075645976372ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
