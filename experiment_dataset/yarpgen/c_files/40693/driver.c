#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3871;
unsigned int var_4 = 464332518U;
short var_5 = (short)18118;
int var_7 = -551846387;
long long int var_8 = 6561169140389437890LL;
unsigned short var_9 = (unsigned short)2337;
unsigned short var_11 = (unsigned short)4501;
unsigned short var_16 = (unsigned short)55018;
int var_18 = -325790955;
int zero = 0;
signed char var_19 = (signed char)-9;
short var_20 = (short)-17254;
unsigned int var_21 = 1217379955U;
_Bool var_22 = (_Bool)1;
int var_23 = -1540536091;
signed char var_24 = (signed char)-37;
signed char var_25 = (signed char)102;
unsigned int var_26 = 21507179U;
unsigned int var_27 = 2666610634U;
unsigned char arr_0 [19] ;
unsigned int arr_1 [19] ;
short arr_3 [25] [25] ;
short arr_4 [25] [25] ;
int arr_5 [25] [25] ;
unsigned short arr_7 [24] ;
short arr_9 [24] ;
unsigned int arr_2 [19] [19] ;
short arr_10 [24] ;
int arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1563412082U : 4162488905U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)31813;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16750;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1212424654;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)47568;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)28978;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 288877835U : 3575778977U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)-12653;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 283365923;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
