#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -395514699803853744LL;
long long int var_13 = -8388429635246850775LL;
signed char var_15 = (signed char)92;
signed char var_16 = (signed char)-21;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5138523774099548295LL;
long long int var_20 = 6506234324541835854LL;
void init() {
}

void checksum() {
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
