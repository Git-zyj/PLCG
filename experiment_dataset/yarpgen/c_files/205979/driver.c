#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28054;
unsigned short var_4 = (unsigned short)40660;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)28733;
unsigned int var_14 = 461544925U;
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
