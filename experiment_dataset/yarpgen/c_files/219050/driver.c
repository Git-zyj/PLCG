#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5492878492160454751ULL;
unsigned char var_3 = (unsigned char)44;
unsigned char var_5 = (unsigned char)90;
unsigned char var_6 = (unsigned char)223;
short var_8 = (short)-13508;
unsigned long long int var_10 = 14436585161359758568ULL;
signed char var_11 = (signed char)-81;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-10650;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)41411;
unsigned short var_18 = (unsigned short)51814;
int zero = 0;
int var_19 = 1843645938;
signed char var_20 = (signed char)73;
signed char var_21 = (signed char)-4;
int var_22 = -2095318202;
signed char var_23 = (signed char)27;
unsigned int var_24 = 751839471U;
unsigned int var_25 = 332964646U;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)59212;
unsigned short var_28 = (unsigned short)56207;
unsigned char var_29 = (unsigned char)9;
signed char var_30 = (signed char)75;
int var_31 = 1069932281;
unsigned char var_32 = (unsigned char)72;
_Bool var_33 = (_Bool)0;
int var_34 = -610457777;
_Bool arr_1 [12] [12] ;
signed char arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
unsigned short arr_5 [22] [22] [22] ;
unsigned char arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 4024068411U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)46188;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)218;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
