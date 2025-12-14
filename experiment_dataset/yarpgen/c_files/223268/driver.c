#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14041;
unsigned int var_1 = 2956732335U;
int var_8 = 126856308;
short var_9 = (short)16660;
unsigned short var_11 = (unsigned short)36394;
int zero = 0;
unsigned short var_12 = (unsigned short)33069;
unsigned short var_13 = (unsigned short)27895;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
