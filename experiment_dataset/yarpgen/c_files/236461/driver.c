#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25850;
unsigned long long int var_1 = 8390006905026504561ULL;
unsigned char var_2 = (unsigned char)35;
short var_3 = (short)24232;
unsigned long long int var_5 = 17775467120045192950ULL;
unsigned long long int var_8 = 17505193681311498952ULL;
unsigned char var_9 = (unsigned char)115;
short var_11 = (short)-26562;
unsigned short var_12 = (unsigned short)38573;
short var_13 = (short)8064;
unsigned short var_14 = (unsigned short)47199;
int zero = 0;
unsigned long long int var_15 = 217608428658506892ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7086649974536424255ULL;
short var_18 = (short)-25850;
_Bool var_19 = (_Bool)0;
int var_20 = 1372446416;
unsigned char var_21 = (unsigned char)97;
unsigned short var_22 = (unsigned short)61720;
signed char var_23 = (signed char)-39;
unsigned char var_24 = (unsigned char)148;
unsigned long long int var_25 = 17088524994271914213ULL;
short var_26 = (short)32537;
long long int var_27 = 1203612689381545073LL;
unsigned short arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned char arr_3 [14] ;
signed char arr_11 [14] [14] [14] [14] [14] ;
int arr_16 [25] [25] [25] ;
unsigned long long int arr_17 [25] [25] [25] [25] ;
int arr_18 [25] [25] ;
short arr_12 [14] [14] [14] [14] [14] ;
unsigned int arr_21 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)57223;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6042082865828132503ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-113 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 591052672;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2380893986857241745ULL : 17166576030956824336ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = -1015796482;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-4369 : (short)-23947;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 792507105U : 1276759782U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
