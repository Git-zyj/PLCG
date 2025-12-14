#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4576898552358344717ULL;
unsigned int var_2 = 2634586669U;
long long int var_3 = 9207189598605410033LL;
unsigned long long int var_6 = 4046042960642404230ULL;
short var_12 = (short)-21720;
unsigned short var_13 = (unsigned short)7510;
unsigned char var_15 = (unsigned char)197;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-41;
short var_18 = (short)30827;
signed char var_19 = (signed char)-53;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
