#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_16 = -6571106463676418434LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3321160262U;
unsigned char var_20 = (unsigned char)44;
unsigned short var_21 = (unsigned short)20412;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
