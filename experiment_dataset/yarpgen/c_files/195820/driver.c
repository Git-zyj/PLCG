#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3781403448401489293LL;
short var_11 = (short)7755;
long long int var_12 = -2287173995421851540LL;
signed char var_14 = (signed char)102;
int zero = 0;
short var_18 = (short)31445;
unsigned long long int var_19 = 17884426557321559140ULL;
long long int var_20 = -1141765722200400931LL;
long long int var_21 = -7667019798774034432LL;
unsigned long long int var_22 = 15526976503355018865ULL;
long long int var_23 = -3703313506098524038LL;
int var_24 = -136069546;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)58;
int var_27 = -1249463631;
unsigned char var_28 = (unsigned char)62;
unsigned long long int var_29 = 7153007830709300894ULL;
unsigned char arr_0 [10] ;
long long int arr_1 [10] ;
int arr_2 [18] [18] ;
unsigned char arr_3 [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_9 [10] [10] [10] ;
unsigned char arr_12 [15] [15] ;
short arr_13 [15] ;
unsigned char arr_11 [10] [10] ;
long long int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -3464913073292988471LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 225483465;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4609901347100709378LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 14477535642697570005ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (short)17763;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)128 : (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = -8133586029334794387LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
