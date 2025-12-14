#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)4;
int var_6 = -1789406416;
int var_8 = 931424916;
int var_10 = -97990302;
unsigned long long int var_12 = 10753391617420252539ULL;
int zero = 0;
signed char var_13 = (signed char)-22;
int var_14 = 976050859;
int var_15 = 337825793;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
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
