#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2860380002U;
_Bool var_1 = (_Bool)0;
long long int var_3 = -1785820104732642766LL;
long long int var_4 = 7334016355771098138LL;
short var_6 = (short)-28723;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 18000822658409842154ULL;
unsigned short var_10 = (unsigned short)16210;
unsigned int var_12 = 773781782U;
unsigned char var_14 = (unsigned char)104;
unsigned short var_15 = (unsigned short)63540;
int zero = 0;
signed char var_16 = (signed char)58;
int var_17 = -1789442407;
int var_18 = -2031076529;
signed char var_19 = (signed char)-79;
unsigned int var_20 = 2869715766U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
