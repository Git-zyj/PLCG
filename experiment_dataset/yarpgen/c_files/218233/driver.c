#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_11 = 254783924;
signed char var_15 = (signed char)4;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = 1719973346;
int var_20 = 292028476;
unsigned long long int var_21 = 13654413643761660884ULL;
signed char var_22 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
