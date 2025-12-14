#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23118;
unsigned long long int var_4 = 8511766533107193954ULL;
unsigned int var_5 = 3574942539U;
long long int var_6 = -6111450076481328282LL;
unsigned long long int var_7 = 15225193685294866588ULL;
long long int var_8 = 1860670358357540611LL;
int var_9 = -1875257602;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)32;
unsigned int var_13 = 3639577869U;
long long int var_14 = 3913437700728571032LL;
unsigned long long int var_15 = 17249535652615876927ULL;
unsigned long long int var_16 = 5290537769186631446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
