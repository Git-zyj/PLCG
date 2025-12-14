#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 439689926;
short var_6 = (short)15717;
unsigned int var_7 = 1546076221U;
int var_8 = 1871432013;
short var_11 = (short)23239;
int zero = 0;
long long int var_15 = -1243790142288676447LL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
