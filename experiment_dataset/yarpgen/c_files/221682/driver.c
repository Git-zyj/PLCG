#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
unsigned short var_3 = (unsigned short)12304;
unsigned long long int var_5 = 13415250073601585077ULL;
unsigned char var_7 = (unsigned char)100;
unsigned short var_8 = (unsigned short)33031;
long long int var_10 = 5143288639724689673LL;
long long int var_13 = 2214173534535429960LL;
long long int var_14 = 5508540478420757931LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)71;
int var_19 = 28763300;
long long int var_20 = 9180373624550287188LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)61;
unsigned char var_23 = (unsigned char)137;
int var_24 = 71856657;
unsigned char arr_0 [24] ;
signed char arr_1 [24] ;
unsigned long long int arr_4 [24] [24] ;
_Bool arr_6 [24] [24] [24] [24] ;
_Bool arr_8 [24] [24] [24] [24] ;
_Bool arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 9731346926059296172ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
