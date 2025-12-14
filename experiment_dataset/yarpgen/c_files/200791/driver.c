#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned short var_1 = (unsigned short)23244;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-20290;
unsigned char var_5 = (unsigned char)89;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17976507083687451963ULL;
int var_8 = 1098312330;
unsigned char var_9 = (unsigned char)192;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 314424608226705402ULL;
unsigned int var_12 = 3726721454U;
int zero = 0;
long long int var_13 = -8500365975210447383LL;
unsigned char var_14 = (unsigned char)101;
signed char var_15 = (signed char)-61;
long long int var_16 = 6589962246118572663LL;
signed char var_17 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
