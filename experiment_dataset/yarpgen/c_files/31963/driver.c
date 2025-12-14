#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 953633571U;
int var_2 = 1463323224;
unsigned char var_3 = (unsigned char)88;
signed char var_4 = (signed char)81;
long long int var_5 = 1126437592213316827LL;
long long int var_6 = 5041499800060493473LL;
long long int var_7 = -9044979324191552227LL;
unsigned char var_8 = (unsigned char)159;
short var_12 = (short)28328;
signed char var_14 = (signed char)44;
signed char var_15 = (signed char)-17;
unsigned char var_17 = (unsigned char)192;
long long int var_18 = 1943695528972318777LL;
int zero = 0;
unsigned char var_20 = (unsigned char)158;
signed char var_21 = (signed char)110;
unsigned short var_22 = (unsigned short)42507;
unsigned char var_23 = (unsigned char)147;
unsigned long long int var_24 = 14835792141432575645ULL;
_Bool var_25 = (_Bool)1;
int var_26 = 1593441177;
unsigned short var_27 = (unsigned short)23584;
int var_28 = 738847307;
signed char var_29 = (signed char)-90;
long long int var_30 = 6179094427542105575LL;
int var_31 = 397647850;
unsigned char var_32 = (unsigned char)133;
unsigned char var_33 = (unsigned char)97;
signed char var_34 = (signed char)-76;
unsigned short var_35 = (unsigned short)34289;
long long int var_36 = 3197667541299716068LL;
unsigned short var_37 = (unsigned short)26157;
unsigned short var_38 = (unsigned short)24692;
long long int arr_0 [22] ;
long long int arr_2 [22] ;
long long int arr_3 [22] ;
signed char arr_4 [20] ;
int arr_5 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned char arr_14 [17] ;
signed char arr_15 [17] ;
long long int arr_25 [12] [12] ;
int arr_29 [12] [12] [12] ;
long long int arr_6 [20] ;
long long int arr_13 [20] [20] [20] ;
unsigned long long int arr_16 [17] ;
long long int arr_21 [12] ;
long long int arr_30 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 517545207454683907LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -6914089251909359447LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 8715880662191434082LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -2103149237;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3154548538044707005ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = 8028935039575291599LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 1459449983;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 5286376284386974892LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4343034617924028185LL : -3226707482208005915LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 11947769593852510550ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -9208438154271648196LL : 2111669543567518328LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? 8236179670380954620LL : -1786887843523369318LL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
