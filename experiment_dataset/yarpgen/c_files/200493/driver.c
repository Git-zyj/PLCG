#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 694258417;
unsigned long long int var_1 = 6095684992907253482ULL;
long long int var_2 = -843882171953087760LL;
unsigned short var_3 = (unsigned short)43497;
unsigned short var_4 = (unsigned short)52189;
unsigned long long int var_5 = 3129800672472295994ULL;
unsigned long long int var_6 = 7344013852563062630ULL;
unsigned short var_7 = (unsigned short)40497;
long long int var_8 = -8347942404298762202LL;
unsigned char var_9 = (unsigned char)244;
int zero = 0;
short var_10 = (short)-9053;
unsigned long long int var_11 = 9685407157095853706ULL;
unsigned char var_12 = (unsigned char)199;
int var_13 = -1671460694;
unsigned long long int var_14 = 9056528205659515165ULL;
unsigned long long int var_15 = 6162130243273292108ULL;
short var_16 = (short)1731;
int var_17 = -1235072908;
unsigned long long int var_18 = 7938728741312525065ULL;
unsigned long long int var_19 = 15657644609533503295ULL;
unsigned int var_20 = 688548733U;
signed char var_21 = (signed char)123;
unsigned char var_22 = (unsigned char)81;
unsigned long long int var_23 = 5894369325522592520ULL;
unsigned short var_24 = (unsigned short)41084;
unsigned short var_25 = (unsigned short)23430;
signed char var_26 = (signed char)-38;
_Bool var_27 = (_Bool)1;
long long int var_28 = -2128244469448812655LL;
unsigned short var_29 = (unsigned short)56689;
unsigned short arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned int arr_5 [16] [16] ;
short arr_6 [16] ;
int arr_7 [16] ;
int arr_8 [16] ;
unsigned int arr_9 [16] ;
unsigned int arr_12 [16] [16] [16] [16] ;
unsigned short arr_16 [16] [16] [16] ;
int arr_17 [16] [16] [16] ;
signed char arr_22 [16] ;
_Bool arr_24 [16] ;
unsigned char arr_25 [16] [16] [16] [16] ;
_Bool arr_31 [15] ;
int arr_39 [24] ;
unsigned long long int arr_40 [24] [24] ;
short arr_41 [24] ;
unsigned long long int arr_3 [14] ;
long long int arr_4 [14] [14] ;
int arr_18 [16] [16] [16] ;
unsigned short arr_26 [16] [16] ;
short arr_29 [15] ;
long long int arr_38 [15] [15] ;
unsigned short arr_42 [24] ;
unsigned long long int arr_43 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)39554;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1070788929533306204ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 2580954320U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)29954;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 557254179;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -1381141143;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1240088673U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1128975602U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)39757;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 658718014;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = 651283858;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_40 [i_0] [i_1] = 2981656263051024871ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (short)-31418;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 16796905788466950548ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 8023893377031577630LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2063666875;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)63039;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (short)-29178;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_38 [i_0] [i_1] = 2988539679322303767LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = (unsigned short)55967;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_43 [i_0] = 6179059064197840034ULL;
}

void checksum() {
    hash(&seed, var_10);
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
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
