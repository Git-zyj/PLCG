#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1052928831U;
signed char var_9 = (signed char)-86;
unsigned long long int var_11 = 9741475764671646836ULL;
unsigned int var_14 = 1940298242U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 843633113272491482ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
