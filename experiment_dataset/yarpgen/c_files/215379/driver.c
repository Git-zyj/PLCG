#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned long long int var_1 = 9933317890423283155ULL;
unsigned char var_2 = (unsigned char)114;
short var_4 = (short)-32711;
unsigned char var_5 = (unsigned char)165;
unsigned short var_6 = (unsigned short)58532;
long long int var_7 = 4300704123920517678LL;
unsigned long long int var_9 = 5789103088659438279ULL;
unsigned short var_10 = (unsigned short)20671;
short var_11 = (short)-4468;
unsigned int var_12 = 2815130192U;
unsigned short var_13 = (unsigned short)58171;
unsigned short var_14 = (unsigned short)22713;
long long int var_15 = -2977479726283898370LL;
unsigned short var_16 = (unsigned short)27767;
unsigned char var_17 = (unsigned char)208;
unsigned char var_18 = (unsigned char)238;
int zero = 0;
unsigned long long int var_19 = 9531787858548940133ULL;
unsigned int var_20 = 1505543196U;
unsigned int var_21 = 4233231142U;
unsigned char var_22 = (unsigned char)37;
unsigned long long int var_23 = 6293784713773894561ULL;
unsigned long long int var_24 = 754602163159614125ULL;
long long int var_25 = -467573717852425980LL;
unsigned char var_26 = (unsigned char)23;
short var_27 = (short)13194;
long long int var_28 = -5434954495791000380LL;
unsigned short var_29 = (unsigned short)56541;
long long int var_30 = -1037095437407984248LL;
signed char var_31 = (signed char)-71;
long long int var_32 = -8220204865971577275LL;
unsigned long long int var_33 = 5182858652855180319ULL;
signed char var_34 = (signed char)89;
unsigned char var_35 = (unsigned char)197;
long long int var_36 = -8342102960853210605LL;
unsigned short var_37 = (unsigned short)19059;
long long int var_38 = -6964572793793680008LL;
signed char var_39 = (signed char)50;
unsigned short var_40 = (unsigned short)24791;
signed char var_41 = (signed char)-35;
long long int var_42 = -4384639169951583227LL;
unsigned short var_43 = (unsigned short)11435;
unsigned long long int var_44 = 2743715725596821680ULL;
unsigned char var_45 = (unsigned char)134;
unsigned long long int var_46 = 17144655339159156433ULL;
unsigned char var_47 = (unsigned char)98;
unsigned int var_48 = 609350254U;
long long int var_49 = -534370583931589167LL;
unsigned int var_50 = 797093785U;
unsigned short var_51 = (unsigned short)65131;
unsigned long long int arr_0 [11] ;
long long int arr_1 [11] ;
unsigned char arr_3 [11] ;
unsigned char arr_4 [11] ;
unsigned int arr_5 [11] [11] ;
unsigned short arr_6 [11] [11] [11] [11] ;
short arr_7 [11] [11] ;
long long int arr_9 [11] ;
unsigned int arr_12 [11] [11] [11] [11] [11] ;
unsigned char arr_13 [11] [11] [11] [11] [11] ;
signed char arr_14 [11] [11] [11] [11] [11] [11] [11] ;
long long int arr_16 [11] [11] [11] [11] ;
unsigned short arr_17 [11] ;
long long int arr_23 [24] ;
long long int arr_24 [24] [24] ;
unsigned short arr_25 [24] [24] ;
long long int arr_26 [24] ;
signed char arr_28 [24] [24] ;
unsigned short arr_29 [24] [24] [24] ;
short arr_31 [24] [24] [24] ;
unsigned short arr_33 [24] ;
_Bool arr_35 [24] [24] [24] ;
unsigned short arr_36 [24] [24] [24] ;
short arr_41 [24] ;
short arr_46 [24] [24] ;
long long int arr_49 [16] ;
unsigned int arr_2 [11] [11] ;
_Bool arr_8 [11] [11] [11] ;
unsigned int arr_18 [11] [11] [11] ;
unsigned int arr_19 [11] [11] ;
int arr_22 [11] ;
unsigned char arr_30 [24] [24] ;
long long int arr_38 [24] [24] [24] ;
unsigned char arr_47 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 265625169097920388ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -8350089025439301390LL : 5324835020099572433LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1465259248U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25124;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-12089;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = -8047141585027324313LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 3020389787U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)163 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -4982898758031998529LL : -8858825811225778444LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (unsigned short)19476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -1374291613321686062LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = -5366031437797087357LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)26027;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 5446374612281551098LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)49688;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (short)-16014;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (unsigned short)52672;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)22662 : (unsigned short)54886;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (short)6080;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_46 [i_0] [i_1] = (short)-12985;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_49 [i_0] = -5581777420785330232LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2782673057U : 57648707U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4054038154U : 2142072828U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 1436150794U : 3771865239U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 1474676954 : -380710730;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)110 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4787873271934447116LL : 5511914962219186868LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)100 : (unsigned char)29;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
