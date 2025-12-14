#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10973;
unsigned char var_1 = (unsigned char)206;
signed char var_2 = (signed char)-74;
unsigned char var_3 = (unsigned char)202;
signed char var_5 = (signed char)2;
int var_6 = 162381629;
int var_9 = 117938364;
short var_12 = (short)16016;
short var_13 = (short)-30758;
unsigned int var_17 = 1497381433U;
signed char var_18 = (signed char)75;
int zero = 0;
signed char var_20 = (signed char)-80;
signed char var_21 = (signed char)-80;
long long int var_22 = -3042050278807178545LL;
unsigned short var_23 = (unsigned short)6227;
unsigned char arr_1 [18] [18] ;
unsigned short arr_2 [18] ;
unsigned long long int arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)18626;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 940169409307064050ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)62138;
}

void checksum() {
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
