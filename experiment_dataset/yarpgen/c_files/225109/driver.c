#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
short var_4 = (short)17735;
unsigned long long int var_5 = 13564402822757247584ULL;
_Bool var_6 = (_Bool)1;
long long int var_9 = -6357470376098290674LL;
int zero = 0;
short var_12 = (short)-7627;
int var_13 = 109379984;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
