#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12366;
long long int var_2 = 5668785043411760624LL;
short var_4 = (short)-24057;
unsigned int var_6 = 257557057U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)52300;
signed char var_9 = (signed char)53;
unsigned char var_10 = (unsigned char)184;
long long int var_11 = 7678802982325302873LL;
short var_15 = (short)-27363;
short var_16 = (short)-22040;
int zero = 0;
unsigned char var_17 = (unsigned char)98;
long long int var_18 = 5303220537654836456LL;
signed char var_19 = (signed char)-39;
signed char var_20 = (signed char)-56;
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
