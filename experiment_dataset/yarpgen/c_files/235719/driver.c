#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1281336627U;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-30457;
unsigned int var_4 = 1970144075U;
short var_5 = (short)-13470;
unsigned short var_8 = (unsigned short)35091;
unsigned int var_9 = 413505848U;
int var_10 = 1306323299;
unsigned char var_12 = (unsigned char)205;
unsigned long long int var_13 = 2651372987640658589ULL;
unsigned short var_14 = (unsigned short)58149;
int zero = 0;
long long int var_15 = 7478766777568518110LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3122628587309612108ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-27897;
short var_20 = (short)4304;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 3806861188768972712ULL;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)47;
_Bool var_26 = (_Bool)0;
long long int var_27 = 5923800929812102784LL;
int arr_0 [10] ;
unsigned short arr_2 [10] [10] ;
short arr_5 [13] ;
short arr_9 [14] ;
unsigned long long int arr_12 [17] ;
_Bool arr_13 [17] ;
unsigned long long int arr_14 [17] ;
unsigned short arr_17 [10] ;
long long int arr_18 [10] ;
_Bool arr_4 [10] ;
short arr_8 [13] ;
unsigned long long int arr_11 [14] [14] ;
short arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 736781776;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)58605;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)31909;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-11974 : (short)-160;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 1263575961918646881ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 9398282267205049146ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned short)23790;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = -5698317689727873634LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)23980 : (short)-31060;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 6797220185695953487ULL : 7586802561249418456ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (short)-25483;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
