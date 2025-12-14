#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10234;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 5902109382091329298ULL;
int zero = 0;
signed char var_15 = (signed char)87;
_Bool var_16 = (_Bool)0;
short var_17 = (short)7202;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
