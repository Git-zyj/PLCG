#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3469;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_5 = -1005889242;
unsigned short var_7 = (unsigned short)17668;
short var_8 = (short)21041;
int var_9 = 669858042;
_Bool var_10 = (_Bool)1;
int var_12 = -1190867547;
short var_13 = (short)-11890;
unsigned char var_15 = (unsigned char)205;
int zero = 0;
signed char var_16 = (signed char)-48;
long long int var_17 = 8471132997902223239LL;
unsigned short var_18 = (unsigned short)6497;
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
