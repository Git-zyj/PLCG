#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1475112156;
short var_1 = (short)-1141;
short var_2 = (short)10494;
signed char var_3 = (signed char)16;
_Bool var_4 = (_Bool)0;
int var_7 = -1603960832;
long long int var_8 = -7924811568711340657LL;
unsigned int var_9 = 1282749881U;
unsigned short var_10 = (unsigned short)27049;
long long int var_12 = -7288806384329330927LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-5504;
int zero = 0;
long long int var_15 = 8800221782720156215LL;
int var_16 = 1949829026;
unsigned short var_17 = (unsigned short)58196;
_Bool var_18 = (_Bool)1;
int var_19 = -1504905006;
unsigned short var_20 = (unsigned short)31664;
int var_21 = -1420702813;
unsigned int var_22 = 1268560662U;
signed char var_23 = (signed char)-75;
signed char var_24 = (signed char)41;
signed char var_25 = (signed char)-12;
long long int var_26 = -6816413554047641054LL;
signed char var_27 = (signed char)77;
long long int var_28 = 1966694046179251245LL;
signed char var_29 = (signed char)38;
unsigned int var_30 = 3928226754U;
unsigned int var_31 = 1835394398U;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)1;
short var_35 = (short)30158;
int var_36 = -1954566083;
unsigned short var_37 = (unsigned short)59502;
int var_38 = -2010066247;
signed char var_39 = (signed char)120;
_Bool var_40 = (_Bool)0;
unsigned short arr_0 [18] ;
int arr_1 [18] ;
_Bool arr_3 [18] ;
short arr_5 [18] ;
unsigned int arr_8 [18] ;
long long int arr_10 [18] [18] [18] [18] ;
unsigned short arr_12 [18] [18] [18] ;
short arr_13 [18] [18] [18] [18] ;
unsigned short arr_16 [18] [18] [18] [18] ;
long long int arr_17 [18] [18] [18] [18] ;
unsigned int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)38554;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 631676908;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-14784;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 57853874U : 1428647822U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8202052506059718891LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)62899;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-369;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23941;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2410508434094595195LL : -9039840926285039385LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2923729004U;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
