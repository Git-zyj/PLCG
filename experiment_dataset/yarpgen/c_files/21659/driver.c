#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30519;
unsigned short var_2 = (unsigned short)65300;
signed char var_3 = (signed char)113;
unsigned long long int var_4 = 2890897967135425081ULL;
unsigned short var_6 = (unsigned short)57762;
unsigned long long int var_7 = 3086993852053761816ULL;
short var_8 = (short)22785;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)105;
unsigned int var_16 = 2097317402U;
unsigned int var_17 = 458192575U;
long long int var_18 = -5161619288999452433LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
