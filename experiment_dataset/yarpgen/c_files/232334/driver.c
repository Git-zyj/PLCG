#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned int var_3 = 1327945879U;
unsigned short var_5 = (unsigned short)27011;
unsigned char var_6 = (unsigned char)153;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2571801031U;
unsigned short var_9 = (unsigned short)10706;
unsigned int var_13 = 2535147124U;
int zero = 0;
unsigned int var_14 = 2752545051U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11657980786058543952ULL;
unsigned int var_17 = 3304914612U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2890972614U;
signed char var_20 = (signed char)-85;
short var_21 = (short)17684;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1334571647U;
long long int var_25 = -4827091384422234349LL;
unsigned char var_26 = (unsigned char)73;
unsigned int var_27 = 3958074865U;
unsigned int var_28 = 2076817907U;
unsigned int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned char arr_2 [24] [24] ;
_Bool arr_4 [19] ;
short arr_5 [19] ;
unsigned int arr_6 [19] [19] ;
unsigned int arr_10 [19] [19] ;
unsigned int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2317802368U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-1687;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 3747809826U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 935163927U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 2102740577U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
