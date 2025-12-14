#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
long long int var_1 = -5298178070674423418LL;
signed char var_2 = (signed char)118;
signed char var_4 = (signed char)-115;
unsigned long long int var_5 = 16837420420422218436ULL;
unsigned long long int var_6 = 11890019600235943970ULL;
short var_7 = (short)-2344;
short var_8 = (short)-12144;
unsigned int var_9 = 1566057270U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)204;
unsigned long long int var_13 = 3412349451814633956ULL;
int zero = 0;
short var_14 = (short)-3191;
signed char var_15 = (signed char)109;
unsigned int var_16 = 1150749300U;
short var_17 = (short)-14585;
_Bool var_18 = (_Bool)1;
short var_19 = (short)1253;
signed char var_20 = (signed char)-68;
unsigned long long int var_21 = 1015511889915405990ULL;
unsigned long long int var_22 = 8352621163434842455ULL;
long long int var_23 = -744034511440449020LL;
unsigned long long int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
signed char arr_4 [24] [24] ;
signed char arr_8 [24] ;
int arr_10 [24] [24] [24] [24] ;
_Bool arr_14 [24] [24] [24] [24] ;
signed char arr_15 [22] ;
unsigned short arr_18 [22] [22] ;
unsigned int arr_6 [24] [24] [24] ;
unsigned char arr_22 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 8448944368484659757ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1141577412;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)13593;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 242768281U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned char)144;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
