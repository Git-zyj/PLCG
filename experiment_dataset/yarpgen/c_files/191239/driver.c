#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
signed char var_3 = (signed char)64;
unsigned int var_4 = 1155928927U;
unsigned char var_6 = (unsigned char)144;
long long int var_7 = 1533814955751209805LL;
unsigned short var_9 = (unsigned short)47435;
unsigned short var_10 = (unsigned short)53485;
int var_11 = 1858206531;
long long int var_12 = 8313615226384150412LL;
int var_14 = -323452507;
unsigned long long int var_17 = 17957917394644546906ULL;
int zero = 0;
short var_19 = (short)-3403;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
