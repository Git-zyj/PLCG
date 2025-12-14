#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)37;
unsigned long long int var_10 = 10731013015925446712ULL;
unsigned char var_12 = (unsigned char)144;
unsigned long long int var_13 = 6809466160764558694ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6663422864685488057ULL;
long long int var_16 = -583323293520193021LL;
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
