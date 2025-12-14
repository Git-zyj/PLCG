#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)113;
signed char var_9 = (signed char)32;
signed char var_10 = (signed char)-4;
signed char var_13 = (signed char)8;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 10492840681401095681ULL;
short var_17 = (short)16961;
signed char var_18 = (signed char)-9;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
