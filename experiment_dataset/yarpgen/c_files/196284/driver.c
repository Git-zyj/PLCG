#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
signed char var_2 = (signed char)34;
unsigned long long int var_3 = 17836005575529258479ULL;
unsigned char var_5 = (unsigned char)102;
unsigned long long int var_6 = 3655006481402769097ULL;
unsigned long long int var_8 = 13223752697316982768ULL;
_Bool var_12 = (_Bool)0;
int var_13 = -1654298017;
unsigned char var_14 = (unsigned char)109;
int zero = 0;
unsigned int var_15 = 4161549890U;
int var_16 = -422905445;
unsigned char var_17 = (unsigned char)124;
long long int var_18 = 2900624081454376472LL;
short var_19 = (short)-24317;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
