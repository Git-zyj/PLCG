#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6309378851579660539ULL;
long long int var_1 = -7702325513605064156LL;
long long int var_2 = 8908114615599519798LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-22196;
int var_11 = 315430436;
unsigned short var_14 = (unsigned short)45461;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
int var_16 = 1513228147;
int var_17 = -295167789;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
