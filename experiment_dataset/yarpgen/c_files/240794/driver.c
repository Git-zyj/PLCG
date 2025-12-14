#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1514742487;
_Bool var_1 = (_Bool)1;
unsigned int var_5 = 3205308884U;
long long int var_7 = 7312736361940900061LL;
unsigned char var_8 = (unsigned char)216;
signed char var_11 = (signed char)124;
long long int var_12 = 3469334336969317875LL;
unsigned int var_13 = 3342763791U;
int var_14 = -748240682;
int zero = 0;
unsigned int var_15 = 1784282690U;
unsigned int var_16 = 1684959400U;
signed char var_17 = (signed char)-5;
unsigned int var_18 = 2203583726U;
signed char var_19 = (signed char)-64;
unsigned char var_20 = (unsigned char)50;
unsigned long long int var_21 = 8086523159264091504ULL;
unsigned int var_22 = 3764654812U;
unsigned long long int var_23 = 9711880984292464491ULL;
unsigned int var_24 = 3429457380U;
short var_25 = (short)5932;
signed char arr_11 [21] [21] [21] [21] [21] [21] ;
signed char arr_12 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_15 [23] ;
int arr_6 [21] [21] ;
_Bool arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)-55 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 8634343237219837839ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1746366324;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
