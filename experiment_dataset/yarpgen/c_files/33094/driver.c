#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2131852249;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3400155844U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 3262364392U;
long long int var_12 = 7174373111012979552LL;
signed char var_13 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
