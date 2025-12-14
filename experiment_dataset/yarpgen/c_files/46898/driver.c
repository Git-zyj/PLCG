#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7249509633913553700LL;
int var_3 = 1688843158;
unsigned short var_4 = (unsigned short)47400;
unsigned int var_10 = 736519139U;
long long int var_16 = 9099622613033495979LL;
int zero = 0;
long long int var_17 = 1020793607373769902LL;
int var_18 = 1582840142;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2637358432U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)48;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)24163;
int var_25 = -995540944;
int var_26 = 213663936;
signed char var_27 = (signed char)-31;
unsigned int var_28 = 3437585685U;
unsigned char arr_0 [15] ;
unsigned char arr_1 [15] ;
signed char arr_4 [14] ;
_Bool arr_6 [18] ;
unsigned short arr_8 [11] ;
int arr_9 [11] [11] ;
short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)34878;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = -981371555;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)27624 : (short)4596;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
