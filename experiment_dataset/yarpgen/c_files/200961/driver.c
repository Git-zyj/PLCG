#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7743;
unsigned long long int var_3 = 15500170396001548787ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-104;
int var_8 = -1678047266;
unsigned long long int var_10 = 14154983029506263354ULL;
short var_11 = (short)18818;
unsigned long long int var_12 = 3527417916786154186ULL;
long long int var_13 = -3198598019852665557LL;
unsigned short var_15 = (unsigned short)4599;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)82;
long long int var_19 = -4124998323582436820LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-16488;
unsigned long long int var_22 = 7931699084550137349ULL;
int var_23 = -982876622;
unsigned int var_24 = 923077425U;
unsigned short var_25 = (unsigned short)3132;
unsigned short var_26 = (unsigned short)55699;
unsigned long long int arr_7 [18] [18] ;
_Bool arr_8 [18] ;
signed char arr_13 [18] [18] [18] ;
unsigned char arr_16 [18] ;
long long int arr_5 [14] [14] [14] ;
unsigned int arr_18 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 4373100148688830883ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)116 : (signed char)-117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1927056835180025123LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2898526625U : 847664853U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
