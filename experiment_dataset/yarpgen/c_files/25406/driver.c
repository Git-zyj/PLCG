#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_5 = 486655561;
unsigned short var_9 = (unsigned short)62944;
int var_12 = -174455015;
unsigned int var_13 = 3146394587U;
int zero = 0;
unsigned int var_14 = 1095714718U;
long long int var_15 = -6223283010276421322LL;
long long int var_16 = 4016266120612749951LL;
unsigned short var_17 = (unsigned short)55690;
unsigned short var_18 = (unsigned short)59428;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
