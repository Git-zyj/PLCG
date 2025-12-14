#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1794331109;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 2223459977173918570ULL;
int zero = 0;
long long int var_14 = -8352998606611484035LL;
unsigned short var_15 = (unsigned short)8825;
_Bool var_16 = (_Bool)0;
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
