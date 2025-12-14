#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
long long int var_2 = 5176264974825252551LL;
unsigned short var_3 = (unsigned short)60770;
unsigned short var_4 = (unsigned short)13621;
signed char var_5 = (signed char)70;
unsigned char var_9 = (unsigned char)192;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4262485478U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)50565;
short var_18 = (short)-20064;
unsigned short var_19 = (unsigned short)57786;
unsigned char var_20 = (unsigned char)112;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
