#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32697;
signed char var_3 = (signed char)10;
short var_4 = (short)-16514;
unsigned int var_5 = 1743793478U;
short var_7 = (short)11893;
unsigned long long int var_8 = 8829094882825472739ULL;
signed char var_9 = (signed char)-102;
unsigned short var_10 = (unsigned short)42225;
int zero = 0;
unsigned short var_15 = (unsigned short)45548;
short var_16 = (short)-21117;
short var_17 = (short)-15465;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)53657;
unsigned short var_20 = (unsigned short)40917;
unsigned char var_21 = (unsigned char)226;
unsigned long long int var_22 = 8301725164717424469ULL;
unsigned char var_23 = (unsigned char)249;
unsigned int arr_3 [14] [14] [14] ;
unsigned char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 772994013U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)249;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
