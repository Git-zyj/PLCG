#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21511;
unsigned long long int var_1 = 4260179278904447064ULL;
unsigned short var_2 = (unsigned short)61643;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 44473233U;
unsigned long long int var_5 = 8745271059441851384ULL;
short var_6 = (short)-12408;
unsigned int var_7 = 3051760635U;
unsigned long long int var_8 = 704557609204275474ULL;
unsigned int var_9 = 4151078928U;
signed char var_10 = (signed char)30;
unsigned long long int var_11 = 831377606050893908ULL;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
long long int var_13 = 5212355371225359339LL;
short var_14 = (short)20530;
short var_15 = (short)-19029;
signed char var_16 = (signed char)90;
long long int var_17 = -1342780452768127890LL;
unsigned int var_18 = 2535641465U;
short var_19 = (short)12800;
unsigned long long int var_20 = 6006848795020771093ULL;
signed char var_21 = (signed char)2;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)36458;
unsigned long long int var_25 = 15835955945010389116ULL;
unsigned long long int var_26 = 5190058478194987912ULL;
int var_27 = -758992856;
signed char var_28 = (signed char)42;
unsigned int var_29 = 856020150U;
unsigned short var_30 = (unsigned short)27705;
unsigned long long int var_31 = 13078181081487838816ULL;
signed char var_32 = (signed char)-6;
unsigned char var_33 = (unsigned char)172;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 8635376388025683010ULL;
_Bool var_36 = (_Bool)1;
signed char var_37 = (signed char)-97;
unsigned long long int var_38 = 13191034978350286655ULL;
unsigned int var_39 = 2044756853U;
unsigned char var_40 = (unsigned char)191;
unsigned int var_41 = 3007763364U;
short var_42 = (short)-21776;
unsigned char var_43 = (unsigned char)10;
unsigned long long int var_44 = 5657632443771815197ULL;
unsigned int var_45 = 580906624U;
unsigned int var_46 = 3741126802U;
unsigned long long int var_47 = 11877523590929578138ULL;
signed char var_48 = (signed char)109;
short arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
short arr_2 [24] ;
unsigned int arr_3 [24] ;
long long int arr_4 [24] [24] ;
unsigned int arr_5 [24] ;
signed char arr_6 [24] ;
unsigned long long int arr_7 [24] [24] ;
short arr_9 [24] [24] [24] ;
long long int arr_10 [24] [24] [24] [24] ;
short arr_11 [24] [24] [24] [24] ;
unsigned int arr_12 [24] [24] [24] ;
unsigned long long int arr_13 [24] [24] [24] ;
unsigned int arr_14 [24] ;
unsigned short arr_15 [24] ;
unsigned long long int arr_18 [24] [24] ;
unsigned char arr_20 [24] [24] [24] [24] ;
_Bool arr_21 [24] [24] [24] [24] ;
int arr_27 [14] [14] ;
long long int arr_28 [14] [14] [14] ;
int arr_30 [14] [14] ;
unsigned int arr_31 [14] ;
unsigned long long int arr_35 [14] ;
int arr_36 [14] [14] [14] ;
unsigned short arr_38 [14] [14] ;
short arr_40 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_42 [14] [14] [14] [14] [14] ;
unsigned long long int arr_46 [14] [14] ;
signed char arr_47 [14] ;
int arr_49 [14] [14] ;
short arr_67 [11] [11] [11] ;
_Bool arr_81 [20] ;
int arr_8 [24] [24] ;
short arr_16 [24] [24] [24] ;
unsigned char arr_17 [24] [24] [24] ;
unsigned long long int arr_23 [24] [24] ;
short arr_24 [24] [24] ;
unsigned int arr_25 [24] ;
int arr_32 [14] ;
short arr_43 [14] [14] [14] [14] [14] ;
unsigned int arr_44 [14] [14] [14] [14] ;
unsigned long long int arr_45 [14] [14] [14] ;
_Bool arr_50 [14] ;
short arr_53 [10] ;
unsigned long long int arr_73 [11] [11] ;
_Bool arr_77 [11] ;
int arr_78 [11] ;
unsigned char arr_82 [20] ;
unsigned char arr_83 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)8904;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)19387;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2214569207U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 6716025661665537404LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 4139292715U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)116 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 17543947874392900563ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-3223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -6398495995702333465LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)23465;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3493658117U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 14625713916517561538ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3843160556U : 1591570618U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)2488;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 14911518392948614270ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = -518398993;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 5348137546979046284LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_30 [i_0] [i_1] = -130239969;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = 4283746863U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = 11243615321463502992ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 433603865;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned short)37911;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)14046 : (short)-24085;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3391824000U : 713851148U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_46 [i_0] [i_1] = 3015168836532700784ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_47 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_49 [i_0] [i_1] = 1475439453;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)16251 : (short)23315;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_81 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -323809818 : 1818173143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)31231 : (short)20442;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)183 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = 7751154896315710748ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (short)31155;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = 3526579637U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = -1717239245;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)21609 : (short)-12523;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = 3962278511U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 18253492920269037677ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_50 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_53 [i_0] = (short)-16758;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_73 [i_0] [i_1] = (i_0 % 2 == 0) ? 17058001409072502146ULL : 1152885825968337416ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_77 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_78 [i_0] = (i_0 % 2 == 0) ? 343292459 : 1753474791;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_82 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_83 [i_0] = (unsigned char)96;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_73 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_77 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_78 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_82 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_83 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
