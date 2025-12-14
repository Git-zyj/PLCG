#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2556545370U;
int var_1 = -1316775614;
unsigned short var_2 = (unsigned short)63184;
int var_4 = -1767708680;
unsigned short var_5 = (unsigned short)1927;
int var_6 = 1616015963;
unsigned short var_7 = (unsigned short)37895;
unsigned int var_8 = 553971779U;
long long int var_9 = -8014841896485042670LL;
unsigned int var_11 = 275557883U;
unsigned short var_12 = (unsigned short)61910;
unsigned short var_13 = (unsigned short)5962;
unsigned int var_14 = 2736579138U;
signed char var_17 = (signed char)-106;
signed char var_18 = (signed char)-112;
unsigned char var_19 = (unsigned char)151;
int zero = 0;
long long int var_20 = -8129792439708172058LL;
unsigned short var_21 = (unsigned short)6999;
signed char var_22 = (signed char)-96;
unsigned char var_23 = (unsigned char)16;
unsigned int var_24 = 3183222093U;
long long int var_25 = -223835367105955820LL;
int var_26 = -1460129340;
unsigned char var_27 = (unsigned char)111;
unsigned int var_28 = 1017567832U;
unsigned int var_29 = 1404978581U;
unsigned int var_30 = 2654144973U;
unsigned char var_31 = (unsigned char)255;
long long int var_32 = 3792370851270559991LL;
unsigned int var_33 = 1089059502U;
long long int arr_2 [23] ;
int arr_3 [23] [23] [23] ;
signed char arr_8 [23] [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] [23] ;
unsigned int arr_13 [25] ;
unsigned char arr_16 [25] [25] [25] ;
int arr_27 [25] ;
unsigned int arr_31 [25] ;
unsigned long long int arr_34 [25] [25] [25] ;
unsigned long long int arr_4 [23] [23] [23] ;
long long int arr_10 [23] [23] [23] ;
int arr_21 [25] [25] [25] [25] [25] ;
signed char arr_22 [25] ;
int arr_29 [25] ;
long long int arr_39 [25] [25] ;
_Bool arr_44 [15] ;
unsigned long long int arr_45 [15] ;
unsigned char arr_46 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8772473894887851700LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1906878139;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2674129073U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 2953942004U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = -556057809;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = 2278370057U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 12051981603868621556ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12756097981619218105ULL : 14403941380608559352ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7273977778037740689LL : -2880537070186487437LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -1659933043 : 2087829005;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -1593545626 : 2035919371;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_39 [i_0] [i_1] = 8633665141246412602LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_44 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = 4871788270595053787ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)152;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
