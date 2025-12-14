#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3124849117U;
unsigned short var_2 = (unsigned short)36914;
short var_3 = (short)-23105;
unsigned short var_4 = (unsigned short)19469;
unsigned char var_5 = (unsigned char)220;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-3;
unsigned int var_8 = 1335971883U;
unsigned char var_9 = (unsigned char)131;
unsigned char var_10 = (unsigned char)220;
short var_11 = (short)-23148;
int zero = 0;
long long int var_12 = -2124292156769831217LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)53153;
signed char var_15 = (signed char)50;
unsigned short var_16 = (unsigned short)60076;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
