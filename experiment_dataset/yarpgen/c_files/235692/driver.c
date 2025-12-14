#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
short var_3 = (short)-29472;
unsigned int var_5 = 2604714253U;
long long int var_6 = 6327588668601735432LL;
unsigned short var_7 = (unsigned short)52806;
unsigned char var_8 = (unsigned char)167;
unsigned char var_9 = (unsigned char)187;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-8;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)49;
int zero = 0;
int var_15 = -686915084;
unsigned short var_16 = (unsigned short)26601;
long long int var_17 = -7674398977840112883LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
