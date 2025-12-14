#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)39;
unsigned long long int var_14 = 9997632371730053392ULL;
int zero = 0;
int var_17 = -1930990980;
signed char var_18 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
