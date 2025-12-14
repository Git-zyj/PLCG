#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2106186361U;
_Bool var_4 = (_Bool)0;
int var_5 = -1777299302;
unsigned char var_8 = (unsigned char)208;
int zero = 0;
unsigned short var_13 = (unsigned short)17799;
unsigned int var_14 = 3710263418U;
unsigned int var_15 = 135835184U;
void init() {
}

void checksum() {
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
