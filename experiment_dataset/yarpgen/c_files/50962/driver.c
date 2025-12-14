#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8334;
_Bool var_1 = (_Bool)1;
long long int var_2 = 613029137184890781LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 1833017968248847257ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)18971;
int zero = 0;
unsigned int var_10 = 3476974747U;
unsigned long long int var_11 = 16319262097584093358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
