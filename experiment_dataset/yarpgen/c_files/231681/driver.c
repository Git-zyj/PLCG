#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_9 = (short)4640;
short var_14 = (short)-13678;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8996761936339745572ULL;
signed char var_19 = (signed char)85;
int var_20 = -508954035;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
