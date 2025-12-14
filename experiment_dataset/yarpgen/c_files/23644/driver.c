#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63398;
int var_3 = -880618370;
signed char var_5 = (signed char)-33;
unsigned short var_6 = (unsigned short)52988;
unsigned int var_8 = 3207739449U;
unsigned long long int var_10 = 9611519655464866686ULL;
unsigned int var_11 = 1294049574U;
unsigned char var_15 = (unsigned char)21;
int zero = 0;
int var_16 = 223626265;
int var_17 = 763350333;
int var_18 = -784967930;
int var_19 = -843281439;
int var_20 = -1028711500;
unsigned int arr_0 [23] ;
unsigned short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2741392613U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)21868;
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
