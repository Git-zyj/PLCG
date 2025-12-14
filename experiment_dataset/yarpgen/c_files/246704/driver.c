#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 634555634;
short var_1 = (short)-19863;
_Bool var_3 = (_Bool)0;
int var_6 = -251034684;
int var_7 = -1163471649;
int var_8 = 1893108405;
unsigned long long int var_9 = 18348498612267642678ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2162960664U;
int zero = 0;
unsigned long long int var_13 = 1679714569821234154ULL;
unsigned int var_14 = 3045300510U;
unsigned char var_15 = (unsigned char)1;
long long int var_16 = -1777417792862240644LL;
unsigned int var_17 = 2994891280U;
short var_18 = (short)-32712;
_Bool arr_4 [13] [13] ;
signed char arr_5 [13] ;
unsigned short arr_9 [25] ;
int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25977 : (unsigned short)25228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1631118722 : 718425349;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
