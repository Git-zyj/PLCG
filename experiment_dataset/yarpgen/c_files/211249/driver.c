#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 97500479458374076ULL;
long long int var_5 = -7527556977407686810LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-92;
int var_21 = 432132615;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
