#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -3734628631984827531LL;
unsigned int var_3 = 3552481416U;
int var_5 = 1293591328;
unsigned long long int var_7 = 6873692069096951232ULL;
unsigned short var_8 = (unsigned short)52539;
long long int var_9 = -7749368843102339646LL;
int zero = 0;
unsigned long long int var_10 = 18111733197724259670ULL;
unsigned int var_11 = 41260724U;
unsigned short var_12 = (unsigned short)46464;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
