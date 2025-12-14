#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57274;
int var_1 = -1955394560;
long long int var_2 = -267795658696396536LL;
unsigned int var_3 = 3273141790U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)160;
unsigned short var_8 = (unsigned short)15663;
long long int var_10 = -434853186956523180LL;
unsigned int var_13 = 2713948620U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 2848377560506025880LL;
int var_18 = -1587196077;
void init() {
}

void checksum() {
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
