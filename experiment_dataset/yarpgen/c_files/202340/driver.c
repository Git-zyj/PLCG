#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)75;
long long int var_5 = -3200024634066770209LL;
_Bool var_9 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-56;
_Bool var_19 = (_Bool)0;
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
