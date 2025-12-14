#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9590375405681913156ULL;
unsigned long long int var_5 = 13783331834996989002ULL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned long long int var_19 = 18006609692412221207ULL;
int zero = 0;
unsigned long long int var_20 = 16520333112046096751ULL;
signed char var_21 = (signed char)73;
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
