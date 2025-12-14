#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
long long int var_6 = -5910698857821904109LL;
unsigned short var_7 = (unsigned short)19454;
unsigned short var_8 = (unsigned short)6055;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1732306548U;
int var_12 = -1705522793;
unsigned int var_14 = 3649048744U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)249;
unsigned int var_17 = 940284131U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)15237;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2527428708U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
