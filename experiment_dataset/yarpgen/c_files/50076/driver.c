#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3645094260U;
short var_4 = (short)3321;
long long int var_5 = -3967742368681682241LL;
int var_6 = 2125550682;
unsigned int var_7 = 3695989029U;
unsigned int var_8 = 757000212U;
long long int var_9 = -2497709943610716138LL;
unsigned long long int var_10 = 13338627701327185773ULL;
long long int var_12 = -4394784864638342518LL;
short var_13 = (short)17387;
int zero = 0;
unsigned short var_15 = (unsigned short)34771;
short var_16 = (short)8961;
short var_17 = (short)-24108;
short var_18 = (short)23044;
short var_19 = (short)-4668;
unsigned long long int var_20 = 17051273125708145121ULL;
signed char var_21 = (signed char)-77;
unsigned short var_22 = (unsigned short)15171;
short arr_1 [18] [18] ;
unsigned int arr_2 [18] [18] ;
unsigned int arr_5 [15] ;
unsigned int arr_8 [15] ;
unsigned long long int arr_3 [18] ;
int arr_4 [18] ;
_Bool arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)16558;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3598623140U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 3297832932U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1563157046U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 9039304236331167074ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1284434971;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
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
