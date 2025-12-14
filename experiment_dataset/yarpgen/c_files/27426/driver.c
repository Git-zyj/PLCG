#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10914;
int var_2 = -729504809;
unsigned int var_5 = 352478800U;
unsigned char var_6 = (unsigned char)200;
unsigned int var_9 = 3782766919U;
unsigned short var_13 = (unsigned short)61995;
unsigned short var_15 = (unsigned short)50515;
unsigned int var_16 = 4188367029U;
unsigned short var_18 = (unsigned short)50146;
int zero = 0;
unsigned short var_20 = (unsigned short)3875;
long long int var_21 = -3603023144236906761LL;
int var_22 = -493302478;
unsigned long long int var_23 = 16454823544061127086ULL;
unsigned int var_24 = 624772596U;
unsigned short var_25 = (unsigned short)64988;
int var_26 = -1235120791;
long long int var_27 = -937064844372383486LL;
unsigned long long int arr_0 [11] [11] ;
unsigned short arr_2 [11] ;
_Bool arr_6 [11] [11] ;
unsigned char arr_7 [11] ;
unsigned int arr_8 [11] [11] [11] ;
unsigned int arr_9 [11] [11] [11] ;
unsigned char arr_11 [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 17160840420761397923ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)10368;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 91362015U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 657550844U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)211;
}

void checksum() {
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
