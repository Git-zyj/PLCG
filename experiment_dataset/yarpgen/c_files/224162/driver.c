#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
_Bool var_2 = (_Bool)1;
int var_3 = -530560680;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)19590;
unsigned char var_6 = (unsigned char)216;
signed char var_7 = (signed char)-9;
signed char var_8 = (signed char)-44;
unsigned short var_9 = (unsigned short)30063;
int zero = 0;
short var_10 = (short)-14575;
long long int var_11 = 4213481073330963670LL;
unsigned long long int var_12 = 11508484718914146679ULL;
unsigned char var_13 = (unsigned char)164;
long long int var_14 = -1217930296226288808LL;
unsigned char var_15 = (unsigned char)44;
unsigned char var_16 = (unsigned char)54;
unsigned char var_17 = (unsigned char)216;
long long int var_18 = 1310863213959423846LL;
signed char var_19 = (signed char)105;
unsigned short var_20 = (unsigned short)10861;
unsigned int var_21 = 2119904793U;
unsigned long long int var_22 = 7735869861488307740ULL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)26;
unsigned char var_25 = (unsigned char)114;
int var_26 = -422664053;
signed char var_27 = (signed char)117;
unsigned int var_28 = 2608117510U;
unsigned char var_29 = (unsigned char)237;
unsigned long long int var_30 = 16970268969832020943ULL;
unsigned int var_31 = 181915226U;
signed char var_32 = (signed char)1;
long long int var_33 = -682678695793640418LL;
unsigned short arr_0 [18] ;
int arr_1 [18] ;
_Bool arr_2 [18] ;
int arr_5 [18] [18] [18] ;
unsigned short arr_7 [18] [18] [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
signed char arr_9 [18] ;
unsigned short arr_10 [18] [18] [18] ;
unsigned char arr_13 [18] ;
unsigned long long int arr_14 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)51158;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -412699301;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -977728064;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)5368;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 12674596667782505092ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)3347;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3076548211637743421ULL : 11293741161161358125ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
