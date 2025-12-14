#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6195;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 4077277835115306196ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)13104;
long long int var_11 = -5540211089565192936LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
