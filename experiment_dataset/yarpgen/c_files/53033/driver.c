#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2933208921U;
unsigned int var_8 = 2866060784U;
int var_9 = -1546333660;
int zero = 0;
unsigned int var_18 = 357066723U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)33006;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
