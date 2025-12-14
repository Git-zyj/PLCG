#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
unsigned char var_2 = (unsigned char)210;
unsigned int var_4 = 2912163695U;
short var_5 = (short)-27589;
unsigned int var_7 = 635667767U;
long long int var_9 = -2826612672216013328LL;
unsigned char var_10 = (unsigned char)39;
int zero = 0;
unsigned char var_12 = (unsigned char)130;
int var_13 = -1901938869;
unsigned long long int var_14 = 18328254275147770060ULL;
int var_15 = -564928937;
unsigned char var_16 = (unsigned char)142;
long long int var_17 = -6090266368514744604LL;
short var_18 = (short)-24658;
unsigned char var_19 = (unsigned char)118;
long long int var_20 = -4624615766124216101LL;
short var_21 = (short)10007;
unsigned char var_22 = (unsigned char)79;
unsigned short var_23 = (unsigned short)31097;
int var_24 = 567736074;
unsigned short var_25 = (unsigned short)61791;
unsigned int var_26 = 3166926764U;
unsigned int var_27 = 2686422562U;
unsigned char var_28 = (unsigned char)8;
unsigned int var_29 = 1517689430U;
unsigned char var_30 = (unsigned char)69;
unsigned char var_31 = (unsigned char)196;
unsigned int var_32 = 4215537775U;
short var_33 = (short)139;
unsigned short var_34 = (unsigned short)58572;
unsigned char var_35 = (unsigned char)152;
unsigned long long int var_36 = 9032608093465485240ULL;
unsigned char var_37 = (unsigned char)79;
unsigned short var_38 = (unsigned short)6425;
unsigned int var_39 = 169709690U;
unsigned short var_40 = (unsigned short)62832;
unsigned char var_41 = (unsigned char)126;
int var_42 = -1005115107;
unsigned char arr_0 [19] ;
short arr_1 [19] ;
unsigned char arr_2 [19] ;
int arr_4 [10] ;
unsigned char arr_6 [10] [10] ;
unsigned short arr_7 [10] [10] ;
long long int arr_8 [10] [10] [10] ;
unsigned long long int arr_12 [10] [10] [10] ;
unsigned char arr_13 [10] [10] [10] ;
unsigned char arr_15 [10] [10] [10] ;
int arr_19 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_23 [10] [10] [10] [10] [10] [10] [10] ;
unsigned char arr_27 [10] [10] [10] [10] [10] [10] [10] ;
unsigned char arr_31 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)12244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1724127694;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)22671;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8179029672291982482LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10326501928948870006ULL : 1513516390661637641ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)184 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)102 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -323397422;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)38 : (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)169 : (unsigned char)32;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
