#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1656041906U;
unsigned int var_7 = 3782279607U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2955016650U;
long long int var_11 = 4902569874708158619LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1432003308358749691LL;
void init() {
}

void checksum() {
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
