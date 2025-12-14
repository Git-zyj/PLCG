#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8183007992918588164ULL;
unsigned long long int var_1 = 18318067472905590586ULL;
unsigned short var_3 = (unsigned short)47649;
short var_5 = (short)9353;
int var_8 = -460303207;
unsigned short var_9 = (unsigned short)30720;
unsigned short var_11 = (unsigned short)7928;
short var_12 = (short)31142;
long long int var_14 = -1948429709018366299LL;
signed char var_15 = (signed char)91;
int var_16 = -1996808965;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1360085630;
int var_21 = 685878176;
signed char var_22 = (signed char)91;
unsigned char var_23 = (unsigned char)0;
unsigned char var_24 = (unsigned char)146;
unsigned long long int var_25 = 15070250573746641772ULL;
unsigned char var_26 = (unsigned char)34;
unsigned long long int var_27 = 13548480138858329960ULL;
unsigned char var_28 = (unsigned char)186;
unsigned long long int var_29 = 11436758511680686109ULL;
unsigned long long int var_30 = 12600395076628997993ULL;
unsigned int var_31 = 2688331302U;
short arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
short arr_5 [15] ;
_Bool arr_7 [15] [15] [15] ;
unsigned char arr_9 [15] [15] [15] [15] ;
unsigned int arr_10 [15] [15] [15] [15] ;
unsigned char arr_11 [15] [15] [15] ;
unsigned int arr_3 [25] ;
unsigned short arr_4 [25] ;
long long int arr_12 [15] [15] ;
unsigned int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)20416;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 4764838199819865943ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)13747;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 3363445652U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)162 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2952715027U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)21312;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 2690109341094855309LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 1113435724U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
