#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42851;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 7145058621794665033ULL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2974947030U;
unsigned int var_20 = 3915305857U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
