#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15751;
unsigned char var_2 = (unsigned char)187;
unsigned char var_5 = (unsigned char)250;
signed char var_7 = (signed char)-102;
signed char var_8 = (signed char)79;
signed char var_10 = (signed char)-59;
long long int var_11 = -2408748967683637105LL;
unsigned long long int var_12 = 7799976859183260840ULL;
int zero = 0;
int var_13 = -789276370;
unsigned short var_14 = (unsigned short)53531;
unsigned long long int var_15 = 18005572474979040458ULL;
int var_16 = -118770378;
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
