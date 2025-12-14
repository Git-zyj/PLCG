#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11483;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 4014614026U;
unsigned char var_8 = (unsigned char)95;
_Bool var_11 = (_Bool)0;
short var_13 = (short)1235;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
int var_17 = -509427533;
int var_18 = 544731270;
short var_19 = (short)-13965;
unsigned int var_20 = 3181709480U;
unsigned int var_21 = 2190733393U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
