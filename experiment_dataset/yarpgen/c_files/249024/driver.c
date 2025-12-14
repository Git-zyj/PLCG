#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33121;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 10185460767877121718ULL;
unsigned long long int var_4 = 14305680780003836168ULL;
int var_5 = -290236868;
unsigned char var_6 = (unsigned char)137;
short var_7 = (short)-14542;
short var_8 = (short)6170;
signed char var_9 = (signed char)-35;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 57353210683500654ULL;
unsigned int var_15 = 3380258686U;
unsigned short var_17 = (unsigned short)64145;
long long int var_18 = 5564960486380356846LL;
short var_19 = (short)-31736;
int zero = 0;
int var_20 = 1192286971;
unsigned char var_21 = (unsigned char)218;
signed char var_22 = (signed char)5;
unsigned long long int var_23 = 13190313122621346841ULL;
unsigned short var_24 = (unsigned short)14848;
int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned char arr_2 [19] ;
int arr_4 [19] [19] [19] ;
unsigned long long int arr_7 [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -425266159;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -5402045950552376638LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1368745766;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3005582909037235321ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 15944995813757153542ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
