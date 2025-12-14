#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1368072212;
unsigned int var_1 = 3799937751U;
long long int var_2 = -1766140831044125400LL;
int var_3 = 1848223581;
int var_5 = 1212947244;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-11283;
short var_10 = (short)19713;
int zero = 0;
int var_11 = 359186234;
unsigned long long int var_12 = 3872626251745374895ULL;
long long int var_13 = -4875474940157529000LL;
unsigned long long int var_14 = 8094354029095778195ULL;
int var_15 = -692734194;
unsigned long long int var_16 = 8163321143573557691ULL;
int var_17 = 1433704331;
unsigned char var_18 = (unsigned char)103;
unsigned char var_19 = (unsigned char)210;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6954217935439707368LL;
unsigned short var_22 = (unsigned short)40591;
int var_23 = -1051926155;
unsigned char var_24 = (unsigned char)236;
unsigned long long int var_25 = 12219413657821335920ULL;
unsigned char var_26 = (unsigned char)198;
unsigned long long int var_27 = 14653934741561586706ULL;
unsigned int var_28 = 2720874828U;
int var_29 = -554147213;
unsigned short var_30 = (unsigned short)2316;
unsigned long long int var_31 = 7522065225638139322ULL;
unsigned int var_32 = 2528199217U;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)206;
unsigned char arr_0 [21] ;
int arr_2 [21] [21] ;
signed char arr_3 [21] [21] ;
unsigned short arr_4 [21] [21] ;
int arr_5 [21] [21] ;
int arr_8 [16] [16] ;
int arr_10 [17] ;
unsigned long long int arr_13 [17] [17] ;
long long int arr_24 [17] [17] [17] [17] ;
_Bool arr_41 [17] ;
unsigned short arr_50 [25] ;
signed char arr_51 [25] ;
unsigned long long int arr_52 [25] [25] ;
int arr_6 [21] [21] ;
long long int arr_9 [16] ;
long long int arr_21 [17] [17] [17] [17] [17] [17] ;
signed char arr_22 [17] [17] [17] [17] ;
unsigned short arr_25 [17] [17] [17] [17] ;
unsigned long long int arr_30 [17] [17] ;
int arr_31 [17] [17] [17] ;
unsigned char arr_38 [17] [17] [17] [17] [17] ;
signed char arr_42 [17] [17] [17] ;
int arr_43 [17] ;
_Bool arr_48 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1640954679;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)32338 : (unsigned short)45337;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1160099836 : 563949430;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -1350839517 : -1132596494;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -2046364618;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 10226763083444315948ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 1472649648126902546LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_41 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17589 : (unsigned short)27311;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? 13859358175839655763ULL : 9102662651245737887ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -1104058872 : -2146640549;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6452183719914671506LL : -1090208146278392459LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1715729741682680143LL : -7635963372784548166LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-50 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)32306 : (unsigned short)58017;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? 6686283223671034168ULL : 5482240142262997519ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 475809351 : -1352942790;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)107 : (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_43 [i_0] = -2070869586;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_48 [i_0] = (_Bool)0;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
