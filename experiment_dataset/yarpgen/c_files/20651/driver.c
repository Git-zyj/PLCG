#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -6494394325046660951LL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-13349;
int zero = 0;
unsigned long long int var_11 = 2790836686791042646ULL;
signed char var_12 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
