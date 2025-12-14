#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1258159871U;
_Bool var_4 = (_Bool)1;
long long int var_8 = 6218580560505678447LL;
int zero = 0;
unsigned char var_13 = (unsigned char)226;
unsigned int var_14 = 2155771072U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
