#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8530438187901429514LL;
signed char var_3 = (signed char)110;
signed char var_4 = (signed char)-39;
signed char var_6 = (signed char)-127;
signed char var_7 = (signed char)-112;
signed char var_11 = (signed char)91;
long long int var_12 = 36789827326320109LL;
long long int var_14 = -8784908120380064275LL;
long long int var_15 = 3219262883270291729LL;
int zero = 0;
signed char var_17 = (signed char)-94;
signed char var_18 = (signed char)(-127 - 1);
signed char var_19 = (signed char)44;
signed char var_20 = (signed char)-125;
long long int var_21 = 5419647954176288251LL;
long long int var_22 = -7604171678153742000LL;
signed char var_23 = (signed char)47;
signed char var_24 = (signed char)-80;
long long int var_25 = -6653271378654000612LL;
signed char var_26 = (signed char)96;
signed char var_27 = (signed char)-9;
long long int var_28 = -4311769836385879407LL;
long long int arr_1 [19] ;
long long int arr_2 [19] [19] ;
signed char arr_5 [19] [19] [19] ;
long long int arr_7 [25] [25] ;
long long int arr_8 [25] ;
long long int arr_11 [25] [25] ;
long long int arr_6 [19] [19] [19] ;
long long int arr_9 [25] [25] ;
signed char arr_16 [25] ;
long long int arr_17 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -2428905530709833854LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -3580279253512863016LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -5043812372040336318LL : 7551447400169904171LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -4202023648569391904LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 8118671949072785114LL : 2791335482966198758LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -8056304803417713553LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 6285392179608890122LL : -171034752560079384LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)-72 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -5492103213317825750LL : 7493425929884920318LL;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
