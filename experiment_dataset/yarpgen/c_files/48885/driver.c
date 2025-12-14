#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned short var_3 = (unsigned short)34134;
unsigned short var_8 = (unsigned short)42820;
unsigned char var_9 = (unsigned char)142;
long long int var_10 = -4159551359123650753LL;
long long int var_11 = 7287526397515273013LL;
signed char var_12 = (signed char)60;
short var_13 = (short)12253;
int zero = 0;
unsigned char var_15 = (unsigned char)167;
short var_16 = (short)25112;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)60762;
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
