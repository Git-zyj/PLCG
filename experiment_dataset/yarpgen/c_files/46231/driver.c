#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5782276197219950387LL;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)116;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -230257884271688224LL;
int var_14 = -483633766;
unsigned int var_15 = 2216796291U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
