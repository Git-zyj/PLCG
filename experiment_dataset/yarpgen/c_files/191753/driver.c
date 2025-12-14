#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6599730106977455515LL;
unsigned int var_1 = 1345057124U;
unsigned long long int var_2 = 12685598468760504635ULL;
unsigned int var_3 = 3272810205U;
long long int var_4 = -4941679701653576425LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)13958;
long long int var_7 = -8345573660444884336LL;
int var_8 = 1684092335;
signed char var_9 = (signed char)-111;
unsigned char var_10 = (unsigned char)59;
unsigned int var_11 = 3405342399U;
unsigned short var_12 = (unsigned short)22399;
unsigned char var_14 = (unsigned char)252;
int var_15 = 279015592;
signed char var_16 = (signed char)4;
signed char var_17 = (signed char)-85;
unsigned short var_18 = (unsigned short)40530;
int zero = 0;
unsigned long long int var_19 = 4508020025254294494ULL;
signed char var_20 = (signed char)73;
unsigned short var_21 = (unsigned short)50385;
int arr_0 [17] ;
unsigned char arr_1 [17] ;
signed char arr_2 [17] [17] ;
long long int arr_3 [17] [17] ;
int arr_4 [17] ;
unsigned int arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 62281424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 6938986259345582229LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1738673572 : -98324635;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3852069577U : 1119228399U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 7992737894025895917ULL : 7171920407234424325ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2033810113 : 39759065;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
