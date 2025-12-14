#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 1895790279659824764LL;
short var_9 = (short)15897;
signed char var_18 = (signed char)69;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11951785744492953316ULL;
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
