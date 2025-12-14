#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1520050162U;
unsigned long long int var_9 = 3235451045126126187ULL;
unsigned int var_10 = 3460491068U;
long long int var_11 = -2615176634512396660LL;
signed char var_15 = (signed char)-115;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8554657658682990183ULL;
signed char var_20 = (signed char)94;
long long int var_21 = -4963525635749720395LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
