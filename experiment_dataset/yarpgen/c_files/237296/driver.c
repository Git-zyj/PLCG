#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12223;
unsigned long long int var_1 = 8602179127417940313ULL;
unsigned char var_2 = (unsigned char)81;
unsigned int var_3 = 3874092660U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 4720252763118744780ULL;
unsigned short var_6 = (unsigned short)38787;
int var_7 = -2021036158;
signed char var_8 = (signed char)-27;
unsigned int var_9 = 533763959U;
unsigned long long int var_10 = 13534498830143181018ULL;
unsigned long long int var_11 = 7603908963087031334ULL;
int var_12 = -1012138803;
unsigned long long int var_13 = 2491824790383057329ULL;
int zero = 0;
int var_14 = -1068542904;
unsigned long long int var_15 = 12597975338899732596ULL;
unsigned long long int var_16 = 11206297154983825476ULL;
long long int var_17 = -3581630778608697338LL;
unsigned int var_18 = 2927431503U;
unsigned long long int var_19 = 9846112337996695956ULL;
short var_20 = (short)-14774;
int var_21 = -899927486;
short var_22 = (short)13212;
int var_23 = 402860572;
int var_24 = -113301456;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
int var_27 = 1214872349;
unsigned long long int var_28 = 5178604310466008061ULL;
unsigned long long int var_29 = 15642931157122948834ULL;
unsigned short var_30 = (unsigned short)4746;
int var_31 = 115184521;
_Bool var_32 = (_Bool)0;
int var_33 = 1281508145;
short var_34 = (short)-30030;
unsigned short var_35 = (unsigned short)30442;
unsigned long long int var_36 = 13254297487261166693ULL;
unsigned char var_37 = (unsigned char)16;
_Bool var_38 = (_Bool)1;
unsigned long long int var_39 = 8512473250359128174ULL;
int var_40 = 1844667937;
short var_41 = (short)-16533;
unsigned long long int var_42 = 3054812533543132203ULL;
short var_43 = (short)-8629;
unsigned short var_44 = (unsigned short)44557;
unsigned long long int var_45 = 13343592484456516685ULL;
short var_46 = (short)17850;
short var_47 = (short)-15214;
short var_48 = (short)-20045;
unsigned long long int var_49 = 17511277059240240351ULL;
unsigned int var_50 = 3995435003U;
unsigned int var_51 = 811439014U;
int var_52 = 6506938;
unsigned short var_53 = (unsigned short)34107;
unsigned short var_54 = (unsigned short)55798;
short var_55 = (short)8749;
unsigned char var_56 = (unsigned char)245;
signed char arr_1 [12] ;
int arr_2 [12] ;
int arr_3 [12] [12] [12] ;
short arr_4 [12] [12] [12] [12] ;
_Bool arr_6 [12] [12] [12] [12] ;
int arr_9 [12] [12] [12] [12] ;
unsigned int arr_10 [12] [12] [12] [12] ;
short arr_12 [12] [12] [12] ;
int arr_15 [12] ;
long long int arr_16 [12] [12] ;
short arr_18 [12] [12] [12] [12] ;
signed char arr_20 [12] [12] ;
unsigned long long int arr_21 [12] [12] [12] [12] ;
short arr_22 [12] [12] [12] [12] ;
unsigned long long int arr_23 [12] [12] [12] ;
short arr_24 [12] [12] [12] [12] ;
int arr_26 [12] [12] ;
signed char arr_29 [12] [12] [12] [12] [12] ;
short arr_31 [12] [12] [12] [12] ;
unsigned char arr_34 [12] [12] [12] ;
long long int arr_40 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 708853525;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1657241824;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (short)-5555;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 240700112 : 1608717185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1607031242U : 496637325U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-11103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = -173875193;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = -6785534934521701613LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)6670;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 14029742192534341282ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)-15817;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 5709848323026578003ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (short)-1714;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = -586193639;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)-13583;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = -8455461124918774235LL;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
