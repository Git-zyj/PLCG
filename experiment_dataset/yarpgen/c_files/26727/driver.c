#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned int var_1 = 3786989353U;
unsigned short var_2 = (unsigned short)12914;
long long int var_3 = 4262671766411348847LL;
signed char var_4 = (signed char)40;
unsigned char var_5 = (unsigned char)21;
unsigned int var_6 = 3589379854U;
long long int var_7 = 6836766883213575684LL;
long long int var_8 = 2576750834059939529LL;
unsigned short var_9 = (unsigned short)5745;
unsigned int var_10 = 2762129081U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
int var_15 = -1533836676;
unsigned int var_16 = 1415817827U;
unsigned char var_17 = (unsigned char)75;
int var_18 = -182452805;
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
