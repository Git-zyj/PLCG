#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_7 = 693838722012389206LL;
unsigned int var_8 = 4257625336U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 791086613057512530ULL;
long long int var_14 = -6661352552032017441LL;
unsigned int var_15 = 3568003666U;
unsigned short var_16 = (unsigned short)55583;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
