#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12117;
short var_3 = (short)-31614;
unsigned long long int var_4 = 9620421580122926902ULL;
unsigned long long int var_5 = 7097260703025937702ULL;
signed char var_6 = (signed char)15;
unsigned long long int var_7 = 18184921117319647955ULL;
unsigned long long int var_8 = 10400526738687981690ULL;
unsigned long long int var_10 = 12840319828269091551ULL;
unsigned long long int var_12 = 10497289146458171214ULL;
unsigned long long int var_13 = 13899302756925773209ULL;
short var_15 = (short)2138;
long long int var_16 = -5142393616445934746LL;
unsigned char var_17 = (unsigned char)97;
long long int var_18 = 601922618460240433LL;
unsigned long long int var_19 = 9336515706466182586ULL;
int zero = 0;
unsigned long long int var_20 = 1813487555185288401ULL;
unsigned long long int var_21 = 8885147190164910153ULL;
unsigned short var_22 = (unsigned short)15249;
unsigned long long int var_23 = 8160254113156300648ULL;
unsigned long long int var_24 = 16194780833338159996ULL;
unsigned char var_25 = (unsigned char)12;
long long int var_26 = -5609454019627102410LL;
unsigned long long int var_27 = 17265516631861284114ULL;
unsigned long long int var_28 = 13919844275591118510ULL;
unsigned short var_29 = (unsigned short)54351;
unsigned short var_30 = (unsigned short)1292;
unsigned char var_31 = (unsigned char)1;
unsigned char var_32 = (unsigned char)155;
unsigned long long int var_33 = 2865369208899105840ULL;
short var_34 = (short)-31973;
long long int var_35 = -8688004514982898731LL;
unsigned long long int var_36 = 11296832939901409499ULL;
long long int var_37 = 4669867080733860360LL;
long long int var_38 = 3470290824805625131LL;
unsigned long long int var_39 = 5337191016117006831ULL;
unsigned short var_40 = (unsigned short)15653;
signed char var_41 = (signed char)78;
long long int var_42 = -2368677027541564049LL;
long long int var_43 = -8969994010610338849LL;
unsigned long long int var_44 = 12457466252302254685ULL;
unsigned char var_45 = (unsigned char)187;
short var_46 = (short)26992;
signed char var_47 = (signed char)-104;
unsigned long long int var_48 = 15955112739129177783ULL;
short var_49 = (short)6009;
unsigned long long int var_50 = 5972054662630300284ULL;
unsigned short arr_2 [21] ;
unsigned char arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
short arr_5 [17] ;
short arr_6 [17] [17] ;
short arr_8 [17] [17] ;
unsigned int arr_10 [17] ;
unsigned long long int arr_11 [17] [17] ;
signed char arr_12 [17] [17] ;
unsigned long long int arr_14 [17] [17] [17] [17] ;
unsigned char arr_16 [17] [17] [17] ;
unsigned long long int arr_17 [17] ;
signed char arr_20 [17] [17] [17] [17] [17] ;
long long int arr_25 [17] ;
short arr_26 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_27 [17] [17] [17] [17] ;
long long int arr_30 [17] [17] [17] [17] [17] ;
unsigned long long int arr_35 [17] [17] [17] ;
unsigned char arr_43 [22] ;
long long int arr_44 [22] [22] ;
short arr_45 [22] ;
unsigned short arr_46 [22] ;
long long int arr_31 [17] [17] [17] [17] ;
long long int arr_32 [17] [17] [17] [17] [17] ;
long long int arr_36 [17] [17] [17] [17] [17] ;
unsigned long long int arr_40 [17] [17] [17] [17] ;
long long int arr_47 [22] ;
unsigned short arr_50 [22] ;
int arr_51 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)15978;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 16735164278041698697ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-12932;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-19330;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)24671;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1621696682U : 2615807323U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 15277097222748642094ULL : 3791635071282601631ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 7292977106300182506ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 18299714762518627389ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)113 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = -6136426942723612053LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)12256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 9314818471827792010ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = -3280672633131343001LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4816213958956189271ULL : 6661917124248569982ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_43 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_44 [i_0] [i_1] = -6521335683693349322LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_45 [i_0] = (short)-31844;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_46 [i_0] = (unsigned short)4694;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -4151062464934044620LL : -3506425482906678955LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 6219914580473477338LL : 3975675494338823955LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3067933596919222024LL : 2571776136243514126LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17696013630942405054ULL : 16202582143643198289ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_47 [i_0] = 3392888277455959426LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_50 [i_0] = (unsigned short)39843;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_51 [i_0] = 797321277;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
