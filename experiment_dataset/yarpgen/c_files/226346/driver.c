#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4254618688164032983LL;
short var_6 = (short)-17713;
unsigned long long int var_7 = 16723761615232420439ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 15738748121477858961ULL;
long long int var_19 = 6315451619931247612LL;
int zero = 0;
int var_20 = -1562446893;
long long int var_21 = -1051384609795695904LL;
int var_22 = 1527684560;
unsigned int var_23 = 4125591485U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
