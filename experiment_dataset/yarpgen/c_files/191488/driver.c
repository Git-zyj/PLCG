#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2386399362U;
unsigned char var_2 = (unsigned char)26;
signed char var_5 = (signed char)-12;
_Bool var_7 = (_Bool)0;
short var_8 = (short)5657;
unsigned short var_9 = (unsigned short)25871;
int var_10 = -81889485;
unsigned long long int var_11 = 2852779741985626366ULL;
unsigned short var_12 = (unsigned short)11980;
int zero = 0;
long long int var_13 = -225590335643507861LL;
unsigned int var_14 = 3885941543U;
long long int var_15 = -9043042444011483611LL;
unsigned short var_16 = (unsigned short)62395;
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
