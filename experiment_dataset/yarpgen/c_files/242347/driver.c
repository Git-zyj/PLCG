#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
_Bool var_2 = (_Bool)0;
long long int var_5 = 1512462973816829196LL;
unsigned short var_6 = (unsigned short)36346;
unsigned short var_7 = (unsigned short)2146;
long long int var_9 = 5590415136556892843LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-13390;
unsigned long long int var_12 = 14150162073661880593ULL;
unsigned short var_13 = (unsigned short)17966;
short var_14 = (short)-18543;
short var_15 = (short)12793;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
