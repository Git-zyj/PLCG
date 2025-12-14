#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_9 = (short)19228;
unsigned short var_16 = (unsigned short)23392;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4177069802613899583LL;
unsigned int var_20 = 1462638386U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
