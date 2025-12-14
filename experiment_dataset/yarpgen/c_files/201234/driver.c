#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17309;
signed char var_4 = (signed char)0;
short var_5 = (short)-2727;
int var_6 = -2119301888;
short var_8 = (short)-19306;
long long int var_9 = -5857479189337472953LL;
short var_10 = (short)-32157;
unsigned char var_11 = (unsigned char)72;
int var_13 = 2026998645;
signed char var_14 = (signed char)65;
unsigned int var_15 = 1123819699U;
int var_19 = -744236568;
int zero = 0;
long long int var_20 = -3618561209905652079LL;
unsigned short var_21 = (unsigned short)14849;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 17291226942217967833ULL;
unsigned long long int var_24 = 11908100676839504646ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
