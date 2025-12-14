#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = 8221638388603099819LL;
unsigned long long int var_7 = 2751133790000444976ULL;
signed char var_9 = (signed char)51;
int zero = 0;
signed char var_15 = (signed char)55;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2802890694U;
unsigned long long int var_18 = 13321855006424296993ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
