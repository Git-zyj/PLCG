#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 264941352478375766ULL;
unsigned short var_4 = (unsigned short)36136;
unsigned int var_6 = 2902611824U;
int var_7 = -1832812020;
short var_8 = (short)9694;
short var_9 = (short)-14501;
int zero = 0;
int var_12 = 156342727;
signed char var_13 = (signed char)87;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
