#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5168374294315674509ULL;
unsigned int var_3 = 3337707556U;
unsigned long long int var_4 = 5644609712239008821ULL;
unsigned long long int var_7 = 17596507823639747372ULL;
int zero = 0;
long long int var_14 = -5197299237474642943LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17592567403117455406ULL;
long long int var_17 = 5018708642201189765LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
