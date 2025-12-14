#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 990232305073663092ULL;
unsigned int var_3 = 3323189405U;
signed char var_6 = (signed char)125;
long long int var_8 = 454215523209511264LL;
unsigned int var_9 = 698079344U;
short var_10 = (short)-1287;
int var_11 = 1222293432;
unsigned char var_13 = (unsigned char)20;
long long int var_16 = -5765151661522192580LL;
unsigned int var_19 = 3631019274U;
int zero = 0;
unsigned short var_20 = (unsigned short)36587;
unsigned short var_21 = (unsigned short)14761;
short var_22 = (short)28985;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
