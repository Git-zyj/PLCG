#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8812505538406009055ULL;
unsigned short var_1 = (unsigned short)1961;
unsigned int var_2 = 2084791890U;
unsigned char var_3 = (unsigned char)219;
unsigned short var_4 = (unsigned short)39219;
unsigned long long int var_5 = 4908848233079144580ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)172;
int var_9 = -471798360;
unsigned short var_10 = (unsigned short)15375;
signed char var_11 = (signed char)-126;
short var_12 = (short)-30296;
unsigned long long int var_13 = 7229808633609286853ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)54706;
unsigned long long int var_15 = 1347425954310130106ULL;
unsigned long long int var_16 = 6620665802485558163ULL;
unsigned char var_17 = (unsigned char)38;
short var_18 = (short)-28215;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
