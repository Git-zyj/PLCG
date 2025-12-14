#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 1919621422117887618ULL;
signed char var_9 = (signed char)-15;
int zero = 0;
unsigned long long int var_18 = 11779296533956562303ULL;
unsigned long long int var_19 = 3223319388494325458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
