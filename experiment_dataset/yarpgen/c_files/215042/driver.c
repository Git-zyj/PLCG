#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)80;
unsigned int var_4 = 2150805560U;
long long int var_5 = 7027995953770885773LL;
unsigned short var_6 = (unsigned short)38004;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -806039957203848028LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)950;
short var_14 = (short)-9436;
unsigned long long int var_15 = 17236745179939154786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
