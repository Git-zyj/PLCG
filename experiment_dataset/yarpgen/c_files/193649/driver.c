#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3085;
unsigned long long int var_3 = 3282445646339372058ULL;
short var_8 = (short)-14624;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)31340;
short var_11 = (short)-27451;
short var_12 = (short)1807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
