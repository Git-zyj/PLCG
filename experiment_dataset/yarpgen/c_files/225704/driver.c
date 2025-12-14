#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9076143909412687248LL;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)14464;
unsigned short var_8 = (unsigned short)60928;
unsigned short var_9 = (unsigned short)44383;
signed char var_10 = (signed char)49;
int zero = 0;
unsigned char var_13 = (unsigned char)13;
unsigned long long int var_14 = 15704056080343953292ULL;
signed char var_15 = (signed char)-34;
unsigned short var_16 = (unsigned short)1556;
signed char var_17 = (signed char)15;
long long int arr_0 [11] [11] ;
unsigned char arr_1 [11] [11] ;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 6002618342523944986LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)62553;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
