#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58828;
short var_3 = (short)23434;
unsigned long long int var_4 = 1485033094963388039ULL;
unsigned short var_6 = (unsigned short)13477;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1915619734;
_Bool var_11 = (_Bool)1;
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
