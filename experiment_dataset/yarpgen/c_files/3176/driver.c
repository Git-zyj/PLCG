#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1082842821987366478LL;
unsigned int var_2 = 104847788U;
int var_3 = -826930974;
unsigned int var_4 = 3432538583U;
long long int var_5 = -4647386331800499701LL;
unsigned int var_6 = 3190389886U;
long long int var_7 = -3335285731304568954LL;
int var_8 = -1578502744;
int var_9 = -1528068055;
unsigned int var_10 = 3185966407U;
signed char var_11 = (signed char)-111;
int zero = 0;
unsigned int var_13 = 3669942047U;
unsigned int var_14 = 4016085922U;
long long int var_15 = 4128544083836414203LL;
long long int var_16 = -6026383119154621112LL;
unsigned int var_17 = 1524725848U;
unsigned long long int var_18 = 13171390241107689244ULL;
int var_19 = -1222454358;
unsigned int var_20 = 749899478U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)103;
unsigned char var_23 = (unsigned char)215;
long long int var_24 = -4587117901796300119LL;
short var_25 = (short)22123;
unsigned long long int var_26 = 4698715092023125176ULL;
unsigned long long int var_27 = 1148840813326035239ULL;
unsigned int var_28 = 1928024534U;
long long int var_29 = -6849426051430393694LL;
unsigned int var_30 = 2324162927U;
long long int var_31 = -6873137405308805830LL;
long long int var_32 = -4242729613382228233LL;
unsigned int var_33 = 369910260U;
long long int var_34 = 2498488201468101865LL;
long long int var_35 = -1491528133766782367LL;
int var_36 = 206462715;
unsigned long long int var_37 = 9138169225866820066ULL;
long long int var_38 = -3172271110078821967LL;
int var_39 = -1588705122;
int arr_0 [18] [18] ;
unsigned char arr_2 [18] [18] [18] ;
int arr_3 [18] ;
long long int arr_4 [18] [18] ;
long long int arr_6 [18] ;
unsigned int arr_8 [18] ;
signed char arr_9 [18] [18] [18] [18] [18] ;
long long int arr_13 [18] ;
unsigned long long int arr_15 [18] [18] [18] [18] ;
signed char arr_16 [18] [18] ;
unsigned int arr_17 [18] [18] [18] [18] [18] ;
long long int arr_23 [15] ;
unsigned int arr_25 [15] ;
long long int arr_26 [15] [15] [15] ;
int arr_34 [15] ;
unsigned int arr_45 [19] ;
unsigned int arr_47 [19] [19] ;
unsigned short arr_49 [19] [19] ;
unsigned long long int arr_54 [19] [19] [19] ;
_Bool arr_18 [18] [18] [18] [18] ;
unsigned long long int arr_44 [15] [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1753353601;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -535334553;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 476130494639801056LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -8339394134241933874LL : 7859743004113800109LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2326992187U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)46 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2342343640967816116LL : 44820128379955619LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 3526649750922822266ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 4217849734U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = -7164421078445493992LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 2370915212U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -6850475865340545633LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = -105615480;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_45 [i_0] = 3783957955U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_47 [i_0] [i_1] = 2171635865U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned short)46044;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 10358583483757417200ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 6562367282848605587ULL : 16839470650406771310ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
