#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
_Bool var_2 = (_Bool)1;
unsigned long long int var_8 = 5861763737974617904ULL;
int zero = 0;
long long int var_16 = -516216624079171823LL;
long long int var_17 = 3517660108749932315LL;
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
