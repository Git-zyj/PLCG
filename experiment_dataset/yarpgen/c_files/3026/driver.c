#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 684653787U;
long long int var_7 = -4145329519480842794LL;
_Bool var_8 = (_Bool)1;
int var_10 = 1709908018;
long long int var_15 = -2716530048234875687LL;
int zero = 0;
unsigned int var_17 = 4231652015U;
unsigned char var_18 = (unsigned char)52;
signed char var_19 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
