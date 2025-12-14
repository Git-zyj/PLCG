#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2423338224334658625ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 17825047633149656789ULL;
long long int var_8 = -7494654863483705622LL;
int zero = 0;
unsigned long long int var_11 = 14852921919483737838ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
