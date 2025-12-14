#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
unsigned long long int var_4 = 4531043209359733023ULL;
long long int var_6 = -1384769861936672089LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)4707;
long long int var_20 = -3098784571681057110LL;
_Bool var_21 = (_Bool)0;
int var_22 = 855881936;
signed char arr_0 [12] [12] ;
_Bool arr_1 [12] [12] ;
unsigned short arr_3 [12] ;
int arr_4 [12] ;
int arr_6 [22] ;
long long int arr_8 [22] [22] [22] ;
unsigned short arr_9 [22] [22] ;
_Bool arr_10 [22] ;
unsigned short arr_11 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)50519;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 452103381;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -2069147879;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3656608807861196440LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)57734;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)1211;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
