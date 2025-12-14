#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)30;
unsigned short var_4 = (unsigned short)13257;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)23340;
long long int var_18 = 5392178828798277384LL;
void init() {
}

void checksum() {
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
