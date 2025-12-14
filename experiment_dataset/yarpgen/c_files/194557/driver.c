#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1795455589;
int var_1 = 433614099;
unsigned long long int var_2 = 6137653965567248583ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)61241;
unsigned short var_5 = (unsigned short)47602;
int var_6 = 776164953;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)57628;
signed char var_9 = (signed char)102;
short var_10 = (short)-25987;
unsigned char var_11 = (unsigned char)111;
unsigned long long int var_12 = 15467431188287096597ULL;
signed char var_13 = (signed char)-9;
unsigned long long int var_14 = 513762556467921078ULL;
unsigned long long int var_15 = 18283027792781909597ULL;
signed char var_16 = (signed char)28;
int zero = 0;
int var_17 = 710515131;
unsigned short var_18 = (unsigned short)41560;
unsigned char var_19 = (unsigned char)116;
signed char var_20 = (signed char)7;
int var_21 = 1478250677;
unsigned char var_22 = (unsigned char)163;
unsigned short arr_0 [17] [17] ;
int arr_1 [17] [17] ;
signed char arr_2 [17] [17] ;
unsigned char arr_3 [17] [17] ;
long long int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)41446;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1962636525;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)217 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -3425026517996642238LL : -7369017634508594994LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
