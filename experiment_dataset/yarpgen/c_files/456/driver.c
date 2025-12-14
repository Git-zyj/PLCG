#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5799593845438325124LL;
short var_1 = (short)19172;
unsigned char var_2 = (unsigned char)78;
int var_3 = -1983187693;
short var_4 = (short)27836;
int var_5 = 1573776864;
unsigned char var_6 = (unsigned char)53;
unsigned int var_7 = 2880456916U;
unsigned char var_8 = (unsigned char)142;
unsigned int var_9 = 3727912067U;
short var_11 = (short)-5164;
unsigned char var_12 = (unsigned char)247;
unsigned short var_13 = (unsigned short)33503;
int zero = 0;
int var_16 = -1009853946;
short var_17 = (short)-31457;
unsigned int var_18 = 3824363615U;
unsigned int var_19 = 4063095381U;
signed char var_20 = (signed char)-21;
unsigned int var_21 = 354710064U;
long long int var_22 = 6091602572341292639LL;
short var_23 = (short)4716;
unsigned int var_24 = 1989063682U;
short var_25 = (short)-11447;
unsigned short var_26 = (unsigned short)42472;
unsigned long long int var_27 = 14238899560783839763ULL;
short var_28 = (short)10576;
unsigned int var_29 = 4012776937U;
short arr_0 [18] ;
long long int arr_1 [18] ;
signed char arr_3 [18] [18] ;
unsigned int arr_5 [18] [18] [18] [18] ;
short arr_6 [18] ;
unsigned int arr_8 [18] [18] [18] ;
unsigned char arr_12 [18] [18] [18] [18] ;
unsigned int arr_16 [18] [18] [18] ;
short arr_17 [18] [18] [18] [18] ;
unsigned char arr_9 [18] [18] ;
int arr_14 [18] ;
int arr_21 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)4172;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 6887988857584641242LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3986476932U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)-7431;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1132644473U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3014272429U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)-31675;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = -1179067699;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 1889871395;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
