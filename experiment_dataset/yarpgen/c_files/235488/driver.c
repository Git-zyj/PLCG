#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)55162;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 17298209616708246277ULL;
unsigned short var_21 = (unsigned short)51783;
long long int var_22 = 5735506807066558156LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
