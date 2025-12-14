#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_10 = -5858258549315676079LL;
signed char var_13 = (signed char)-90;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_16 = -128076665;
unsigned long long int var_17 = 10111998907897647566ULL;
signed char var_18 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
