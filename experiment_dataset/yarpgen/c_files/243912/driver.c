#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1675507797;
int var_1 = 1886436327;
long long int var_2 = -6077529875166336599LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4522378198851869551LL;
unsigned int var_6 = 4039139044U;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -9119157258492813593LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)92;
long long int var_13 = -8344214138320377099LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
