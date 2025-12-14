#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 11102877413800411399ULL;
int var_11 = 2012744176;
unsigned int var_15 = 2951324342U;
long long int var_17 = 3014271722370955684LL;
int zero = 0;
signed char var_18 = (signed char)124;
signed char var_19 = (signed char)110;
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
