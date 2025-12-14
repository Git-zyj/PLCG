#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)0;
unsigned int var_2 = 3765626702U;
long long int var_3 = 2520856848919129921LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -269207851514240614LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)485;
unsigned int var_8 = 3634923522U;
long long int var_9 = 5061008859223786244LL;
long long int var_10 = 5261158984167504666LL;
int zero = 0;
unsigned long long int var_11 = 11583765665260972430ULL;
long long int var_12 = -5289424097684366566LL;
short var_13 = (short)20506;
unsigned char var_14 = (unsigned char)68;
int var_15 = 493249965;
unsigned long long int var_16 = 15933270519525153997ULL;
short var_17 = (short)7716;
unsigned long long int var_18 = 4623980579904240358ULL;
short var_19 = (short)16337;
unsigned int var_20 = 3434572977U;
long long int var_21 = -4357459309080066446LL;
unsigned short var_22 = (unsigned short)31606;
unsigned char var_23 = (unsigned char)96;
unsigned int var_24 = 769870465U;
unsigned char var_25 = (unsigned char)0;
long long int var_26 = -9104664876428932919LL;
unsigned char var_27 = (unsigned char)131;
long long int var_28 = -4640818085706048666LL;
unsigned int var_29 = 799838122U;
short var_30 = (short)-14811;
unsigned char var_31 = (unsigned char)71;
short var_32 = (short)22622;
short var_33 = (short)12178;
unsigned int var_34 = 92644121U;
short var_35 = (short)18371;
int var_36 = 1152155153;
int var_37 = -1824926995;
short var_38 = (short)-19621;
unsigned char var_39 = (unsigned char)87;
int var_40 = 1330984011;
unsigned char var_41 = (unsigned char)174;
int var_42 = -2025757815;
_Bool var_43 = (_Bool)0;
signed char var_44 = (signed char)117;
long long int var_45 = 2698171728102656783LL;
unsigned char var_46 = (unsigned char)148;
long long int var_47 = -6167631413407753197LL;
signed char var_48 = (signed char)17;
_Bool var_49 = (_Bool)1;
long long int var_50 = -8682157019717876090LL;
signed char var_51 = (signed char)-104;
short var_52 = (short)6155;
unsigned char var_53 = (unsigned char)2;
int var_54 = -818743972;
_Bool var_55 = (_Bool)1;
signed char var_56 = (signed char)114;
long long int var_57 = 1170430756247205205LL;
int var_58 = -806897813;
signed char var_59 = (signed char)23;
unsigned int var_60 = 3330467200U;
unsigned int var_61 = 1942389838U;
signed char var_62 = (signed char)-91;
unsigned short var_63 = (unsigned short)64260;
unsigned int var_64 = 4020158468U;
signed char var_65 = (signed char)47;
unsigned int var_66 = 2880579606U;
long long int var_67 = -5864313972639269678LL;
_Bool arr_0 [23] ;
int arr_2 [23] ;
unsigned char arr_3 [23] ;
_Bool arr_5 [23] ;
long long int arr_6 [23] [23] [23] ;
short arr_9 [23] [23] [23] [23] [23] ;
unsigned char arr_12 [23] [23] [23] [23] ;
long long int arr_13 [23] [23] [23] [23] ;
unsigned int arr_14 [23] [23] [23] [23] [23] ;
unsigned int arr_19 [23] [23] [23] ;
unsigned char arr_20 [23] ;
unsigned short arr_22 [23] [23] ;
signed char arr_26 [23] [23] ;
long long int arr_27 [23] [23] [23] ;
unsigned short arr_29 [23] [23] [23] [23] ;
unsigned char arr_33 [23] [23] [23] [23] ;
unsigned int arr_36 [23] [23] [23] [23] [23] ;
int arr_41 [23] [23] [23] [23] [23] ;
unsigned int arr_42 [23] [23] [23] [23] [23] ;
long long int arr_46 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_47 [23] [23] [23] [23] [23] [23] [23] ;
unsigned int arr_50 [23] [23] [23] ;
unsigned char arr_56 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_71 [17] ;
unsigned long long int arr_95 [24] ;
unsigned char arr_96 [24] ;
long long int arr_97 [24] [24] [24] ;
signed char arr_98 [24] [24] ;
unsigned short arr_99 [24] [24] ;
unsigned int arr_104 [24] ;
unsigned long long int arr_110 [24] [24] [24] ;
long long int arr_32 [23] [23] [23] [23] [23] ;
int arr_38 [23] ;
unsigned short arr_45 [23] [23] [23] [23] [23] [23] [23] ;
signed char arr_48 [23] [23] [23] ;
unsigned char arr_52 [23] ;
_Bool arr_66 [23] [23] [23] [23] [23] [23] [23] ;
short arr_77 [17] [17] [17] [17] ;
unsigned short arr_78 [17] ;
long long int arr_91 [22] ;
short arr_92 [22] [22] ;
unsigned char arr_108 [24] [24] ;
unsigned char arr_113 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1243121380;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7661177485068181913LL : -5364991527626367123LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-32123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4533903499757020207LL : -8548546064321920294LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 16681112U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 4222348528U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)15120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6900088151831289044LL : 2278920819470492997LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55670;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 1659281080U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = -1204788877;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = 1004553275U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -3572304998489984803LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2203956620882110309ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = 3494336769U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_71 [i_0] = 5985378965971022297ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_95 [i_0] = 13384390038325448648ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_96 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_97 [i_0] [i_1] [i_2] = 6839815119246469899LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_98 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_99 [i_0] [i_1] = (unsigned short)45186;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_104 [i_0] = 834391235U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_110 [i_0] [i_1] [i_2] = 10906005360093632147ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -4899197019485794825LL : -4848258087317487392LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = 292660052;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)12639;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_52 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-29462 : (short)-14692;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_78 [i_0] = (unsigned short)57471;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_91 [i_0] = -7714708637144084785LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_92 [i_0] [i_1] = (short)-11912;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_108 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)115 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_113 [i_0] = (unsigned char)84;
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
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_77 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_78 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_92 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_108 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_113 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
