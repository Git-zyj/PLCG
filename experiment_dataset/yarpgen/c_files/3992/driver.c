#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7642030273451619777ULL;
long long int var_1 = -8986212207235704234LL;
long long int var_2 = 2041950878415292423LL;
unsigned long long int var_3 = 12780266024189131882ULL;
int var_6 = -196959372;
int var_7 = -1035427041;
int var_8 = 1071706541;
unsigned char var_9 = (unsigned char)156;
short var_10 = (short)30701;
int zero = 0;
signed char var_11 = (signed char)68;
unsigned short var_12 = (unsigned short)63654;
signed char var_13 = (signed char)-2;
signed char var_14 = (signed char)28;
unsigned short var_15 = (unsigned short)22109;
int var_16 = 2022523788;
unsigned long long int var_17 = 1020933146122464426ULL;
short var_18 = (short)36;
unsigned char var_19 = (unsigned char)159;
long long int var_20 = -4777997489606024757LL;
unsigned long long int var_21 = 11821643613500107607ULL;
unsigned short arr_3 [12] ;
signed char arr_5 [18] [18] ;
_Bool arr_6 [18] [18] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_16 [18] ;
long long int arr_19 [18] ;
unsigned long long int arr_22 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)60695;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-58 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 18287771856519720162ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 8473721374638698108ULL : 16325909067583956821ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3309819819355835633LL : 3650950556172791033LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 10480855902641988883ULL : 8309133765214294255ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
