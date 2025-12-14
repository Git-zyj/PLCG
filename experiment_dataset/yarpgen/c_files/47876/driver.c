#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)152;
long long int var_4 = 5698303641462636771LL;
unsigned short var_6 = (unsigned short)54409;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3977727552U;
signed char var_9 = (signed char)4;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)30;
int var_12 = -1761951510;
long long int var_15 = 4879910476262696645LL;
unsigned short var_17 = (unsigned short)42379;
int zero = 0;
unsigned short var_18 = (unsigned short)18682;
short var_19 = (short)-331;
unsigned char var_20 = (unsigned char)170;
long long int var_21 = 8902778803358864737LL;
int var_22 = -1931824361;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)16677;
int var_25 = 2057766079;
unsigned short var_26 = (unsigned short)59273;
int var_27 = 2092249197;
int arr_0 [16] [16] ;
int arr_15 [22] ;
signed char arr_16 [22] [22] [22] [22] ;
unsigned int arr_19 [22] [22] [22] [22] [22] ;
_Bool arr_21 [22] [22] [22] [22] [22] ;
signed char arr_22 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -163301199;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = -410734119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 3438495967U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-90;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
