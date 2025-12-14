#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1675412010;
unsigned short var_7 = (unsigned short)44270;
long long int var_9 = -6809538697668845204LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7197213025410875360ULL;
long long int var_16 = 1740256195215784343LL;
unsigned short var_17 = (unsigned short)15580;
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
