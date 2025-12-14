#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14973008520463103802ULL;
unsigned long long int var_3 = 4347275317545364818ULL;
long long int var_9 = -765235127454033966LL;
long long int var_12 = -2355279223513843117LL;
int zero = 0;
unsigned long long int var_14 = 11929583346156157878ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
