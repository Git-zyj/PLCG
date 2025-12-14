#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31530;
int var_3 = 2078736912;
unsigned long long int var_7 = 1424037363963229658ULL;
long long int var_9 = -4675182083252543258LL;
unsigned int var_10 = 3873076073U;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7151923642558282579LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
