#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9910;
long long int var_9 = -5392275559409898319LL;
short var_13 = (short)18046;
unsigned long long int var_14 = 10182338427419895803ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)20779;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 7578273283926401918ULL;
_Bool var_20 = (_Bool)1;
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
