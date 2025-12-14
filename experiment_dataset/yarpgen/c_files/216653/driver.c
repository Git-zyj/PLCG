#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20375;
unsigned int var_2 = 2672564996U;
unsigned long long int var_4 = 3496689141775504718ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 1597376400;
unsigned int var_12 = 706824963U;
int zero = 0;
unsigned char var_15 = (unsigned char)56;
long long int var_16 = -3092951538200489614LL;
int var_17 = 2012278037;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
