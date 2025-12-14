#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6421084250735158611LL;
unsigned int var_3 = 3674984839U;
unsigned short var_6 = (unsigned short)5888;
short var_8 = (short)2629;
long long int var_12 = 7712080827841078481LL;
int zero = 0;
unsigned int var_16 = 3936138392U;
unsigned int var_17 = 1782502134U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
