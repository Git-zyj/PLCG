#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3500202624U;
int var_10 = -1447183971;
int var_12 = -1684830863;
_Bool var_13 = (_Bool)1;
int var_15 = 1009909887;
int zero = 0;
unsigned short var_18 = (unsigned short)64257;
int var_19 = -1033017960;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
