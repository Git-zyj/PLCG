#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1354261581;
long long int var_1 = 2966154770002552638LL;
signed char var_2 = (signed char)25;
unsigned char var_5 = (unsigned char)80;
short var_8 = (short)8361;
long long int var_10 = 5267246900047041613LL;
unsigned short var_14 = (unsigned short)40234;
int var_15 = -950942313;
int zero = 0;
signed char var_19 = (signed char)-26;
unsigned char var_20 = (unsigned char)53;
signed char var_21 = (signed char)65;
unsigned long long int var_22 = 4439241169634886966ULL;
unsigned int var_23 = 1445131026U;
unsigned char var_24 = (unsigned char)94;
long long int var_25 = 2915618325885629262LL;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)1;
unsigned int var_28 = 85429889U;
int var_29 = -157949028;
unsigned short var_30 = (unsigned short)64452;
long long int var_31 = 7947509649551005468LL;
unsigned char var_32 = (unsigned char)50;
signed char arr_1 [10] [10] ;
unsigned char arr_3 [16] ;
unsigned short arr_4 [16] ;
long long int arr_5 [16] [16] ;
_Bool arr_6 [16] [16] [16] ;
_Bool arr_7 [16] [16] [16] [16] ;
_Bool arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)52901;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -339973229760009403LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
