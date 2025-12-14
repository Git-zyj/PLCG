#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9796727806617939106ULL;
signed char var_3 = (signed char)-2;
int var_4 = 436200486;
short var_6 = (short)17819;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 4460320905513634572ULL;
long long int var_13 = 5104927341852865414LL;
int var_14 = -481951801;
int zero = 0;
signed char var_15 = (signed char)24;
signed char var_16 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
