#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
signed char var_1 = (signed char)26;
int var_2 = 1480323513;
unsigned int var_3 = 1616106849U;
unsigned char var_5 = (unsigned char)159;
int var_6 = 676290187;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)94;
unsigned int var_10 = 2470687779U;
unsigned int var_11 = 1649003068U;
unsigned int var_13 = 3301874618U;
long long int var_16 = 3099051111637346861LL;
int zero = 0;
unsigned char var_17 = (unsigned char)71;
unsigned int var_18 = 3562795804U;
unsigned int var_19 = 3327953367U;
long long int var_20 = 1401036890495476847LL;
signed char var_21 = (signed char)114;
unsigned int var_22 = 3669693316U;
int var_23 = 670416459;
signed char var_24 = (signed char)-114;
int var_25 = 92216603;
unsigned char var_26 = (unsigned char)151;
signed char arr_0 [18] ;
signed char arr_1 [18] ;
signed char arr_2 [18] ;
long long int arr_4 [18] ;
short arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] ;
int arr_10 [20] [20] ;
int arr_11 [20] [20] ;
int arr_14 [19] [19] ;
unsigned char arr_16 [19] ;
signed char arr_21 [19] ;
signed char arr_3 [18] ;
int arr_7 [18] ;
long long int arr_12 [20] ;
short arr_13 [20] ;
signed char arr_17 [19] ;
int arr_18 [19] [19] ;
signed char arr_27 [19] [19] [19] [19] ;
long long int arr_28 [19] [19] ;
short arr_33 [19] [19] [19] ;
short arr_34 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7830891320357769853LL : 5863565513555571003LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-5119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 2182389426U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -774489426;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 95690246;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = -232409425;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2113605841 : 704693585;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 8225402435347151381LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (short)-20449;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = -1821920667;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)76 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? -750082510106247377LL : -6098793518309649366LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (short)29135;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (short)22180;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
