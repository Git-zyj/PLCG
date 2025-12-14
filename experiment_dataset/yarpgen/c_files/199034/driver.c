#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2301198656U;
unsigned int var_2 = 2136304019U;
unsigned char var_3 = (unsigned char)8;
unsigned short var_5 = (unsigned short)40401;
long long int var_6 = 756215353370409048LL;
unsigned char var_7 = (unsigned char)35;
int var_8 = -906233736;
unsigned long long int var_9 = 7780738651724309422ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 6185634594218400972LL;
long long int var_12 = -7618191213329946056LL;
_Bool var_13 = (_Bool)1;
int var_14 = 1798800701;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3909015788U;
unsigned short var_17 = (unsigned short)9424;
unsigned char var_18 = (unsigned char)249;
unsigned short var_19 = (unsigned short)40419;
unsigned short var_20 = (unsigned short)28551;
int var_21 = 1405968275;
unsigned char arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
int arr_4 [17] ;
unsigned long long int arr_6 [17] [17] ;
unsigned int arr_7 [17] [17] ;
unsigned char arr_8 [17] [17] ;
unsigned int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)164 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 3773592594U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 210311706;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 9033183200801001303ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 3164460856U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 793534573U : 3933822663U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
