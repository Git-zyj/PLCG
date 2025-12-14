#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)115;
long long int var_5 = -4058831550613823346LL;
long long int var_10 = -1731378042317827679LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-36;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)63;
signed char var_20 = (signed char)101;
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
