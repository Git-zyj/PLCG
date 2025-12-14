#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59596;
long long int var_1 = 7965994422795342234LL;
unsigned short var_3 = (unsigned short)42274;
unsigned short var_5 = (unsigned short)18441;
unsigned short var_6 = (unsigned short)61591;
unsigned int var_7 = 1964198179U;
unsigned short var_8 = (unsigned short)38262;
unsigned int var_9 = 2484299097U;
long long int var_11 = -2924628872334058935LL;
unsigned int var_12 = 809646555U;
int zero = 0;
unsigned int var_13 = 3562057451U;
unsigned char var_14 = (unsigned char)135;
unsigned short var_15 = (unsigned short)3089;
unsigned long long int var_16 = 12302617747193217554ULL;
unsigned int var_17 = 579477087U;
unsigned short var_18 = (unsigned short)63925;
unsigned short var_19 = (unsigned short)51941;
unsigned long long int var_20 = 1616890498937276821ULL;
unsigned int arr_1 [12] [12] ;
unsigned char arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned long long int arr_6 [18] ;
long long int arr_10 [18] [18] ;
unsigned short arr_11 [18] [18] [18] ;
unsigned short arr_16 [18] [18] [18] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1528127651U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)56391;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 9405623261945080277ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 8443622587287266936LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)4708 : (unsigned short)7734;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)59234;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1563244173U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
