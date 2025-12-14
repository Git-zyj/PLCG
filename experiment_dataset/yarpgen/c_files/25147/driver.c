#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1351230800U;
signed char var_3 = (signed char)-123;
long long int var_4 = 6238208522969487870LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)18487;
unsigned short var_17 = (unsigned short)13983;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
