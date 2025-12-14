#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1960463219654609341ULL;
long long int var_1 = 3645521587431884392LL;
unsigned long long int var_2 = 7362391782809446091ULL;
signed char var_3 = (signed char)64;
long long int var_4 = 8862455179030755302LL;
long long int var_5 = 4765945898023892547LL;
unsigned long long int var_6 = 12857237338695647844ULL;
long long int var_7 = -8824229530808448012LL;
unsigned long long int var_8 = 16292465830988111527ULL;
long long int var_9 = -560068788453016684LL;
int zero = 0;
signed char var_11 = (signed char)62;
unsigned long long int var_12 = 2375504082986896038ULL;
unsigned long long int var_13 = 15716327436049185987ULL;
unsigned char var_14 = (unsigned char)57;
int var_15 = 53360853;
long long int var_16 = -974524365169124893LL;
signed char var_17 = (signed char)-13;
int var_18 = -412728601;
unsigned long long int var_19 = 163931002724083908ULL;
unsigned short var_20 = (unsigned short)58612;
signed char var_21 = (signed char)-87;
unsigned short var_22 = (unsigned short)61870;
unsigned short var_23 = (unsigned short)55038;
int var_24 = -79228081;
signed char var_25 = (signed char)4;
unsigned long long int var_26 = 5368757049167776018ULL;
unsigned long long int var_27 = 5486539486457973789ULL;
unsigned short var_28 = (unsigned short)25725;
short var_29 = (short)12505;
short arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
unsigned int arr_3 [22] ;
signed char arr_6 [14] ;
unsigned long long int arr_7 [14] ;
unsigned short arr_9 [18] ;
unsigned short arr_10 [18] ;
signed char arr_11 [18] ;
int arr_16 [14] [14] ;
unsigned short arr_22 [25] ;
int arr_8 [14] ;
unsigned short arr_12 [18] ;
unsigned short arr_17 [14] ;
unsigned long long int arr_20 [14] [14] ;
long long int arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)32156;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 5313078283594808168ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 4002361180U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 11741399081277576939ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)62280;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned short)48954;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = -974239352;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6960 : (unsigned short)64477;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1552640120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4762 : (unsigned short)7581;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned short)37213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = 3221960912874129347ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2377397338652655527LL : 1655618689271766706LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
