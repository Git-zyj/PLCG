#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21958;
unsigned char var_1 = (unsigned char)158;
_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = -4009954188874122654LL;
long long int var_9 = 9070070773420096684LL;
unsigned int var_10 = 2993967664U;
unsigned int var_11 = 3156727923U;
int var_12 = -7948639;
short var_13 = (short)-27312;
int zero = 0;
unsigned int var_14 = 1574745822U;
unsigned long long int var_15 = 4805272236030036228ULL;
unsigned int var_16 = 1071140182U;
void init() {
}

void checksum() {
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
