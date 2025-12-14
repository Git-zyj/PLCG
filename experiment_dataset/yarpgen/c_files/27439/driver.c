#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5919684221388831641LL;
int var_6 = -486617918;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 947190688U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9494129665240282274ULL;
void init() {
}

void checksum() {
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
