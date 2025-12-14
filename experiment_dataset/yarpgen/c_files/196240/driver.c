#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10512975331606972628ULL;
short var_5 = (short)-25665;
unsigned int var_7 = 953806966U;
unsigned long long int var_10 = 14681436114521651526ULL;
int var_11 = -1014599785;
unsigned long long int var_14 = 10689109551882595878ULL;
int zero = 0;
long long int var_15 = 7271542951558811876LL;
int var_16 = -61889856;
short var_17 = (short)-23345;
unsigned long long int var_18 = 14935763994754643583ULL;
unsigned short var_19 = (unsigned short)49966;
unsigned int var_20 = 1184910282U;
_Bool var_21 = (_Bool)0;
unsigned char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
