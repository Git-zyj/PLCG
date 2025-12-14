#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 684347718U;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)5;
signed char var_10 = (signed char)-67;
unsigned int var_15 = 2023410053U;
int zero = 0;
unsigned long long int var_16 = 18414560316121349227ULL;
long long int var_17 = -749266670774231432LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
