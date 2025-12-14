#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3269893450796366898LL;
int var_2 = 2028948783;
unsigned int var_4 = 167232004U;
short var_5 = (short)-32656;
unsigned int var_8 = 182879396U;
unsigned long long int var_9 = 13954754112193219548ULL;
int var_10 = 2022684365;
_Bool var_11 = (_Bool)0;
short var_12 = (short)30533;
unsigned int var_13 = 1190968379U;
unsigned char var_14 = (unsigned char)90;
short var_15 = (short)8481;
short var_16 = (short)5878;
short var_17 = (short)28436;
short var_18 = (short)20469;
int zero = 0;
short var_19 = (short)-27381;
unsigned short var_20 = (unsigned short)41651;
short var_21 = (short)3039;
unsigned int var_22 = 159508198U;
unsigned short var_23 = (unsigned short)20646;
unsigned long long int var_24 = 259192276565382379ULL;
unsigned int var_25 = 3671570580U;
int var_26 = -1370515896;
short var_27 = (short)9341;
int var_28 = -181215257;
_Bool var_29 = (_Bool)1;
long long int var_30 = 5132885100033409693LL;
unsigned char var_31 = (unsigned char)107;
unsigned char var_32 = (unsigned char)175;
int var_33 = -850240283;
unsigned long long int var_34 = 2545193947111968060ULL;
int var_35 = -910818655;
_Bool var_36 = (_Bool)0;
unsigned char var_37 = (unsigned char)199;
short var_38 = (short)-18515;
short var_39 = (short)2182;
int var_40 = 988863381;
_Bool var_41 = (_Bool)0;
unsigned int var_42 = 3493566146U;
unsigned char var_43 = (unsigned char)155;
long long int var_44 = 1871585181197741577LL;
short var_45 = (short)-7703;
unsigned char var_46 = (unsigned char)43;
unsigned char var_47 = (unsigned char)194;
unsigned int var_48 = 3063734171U;
unsigned long long int var_49 = 4188782607572321467ULL;
unsigned short var_50 = (unsigned short)53682;
signed char var_51 = (signed char)-117;
short var_52 = (short)-14302;
long long int var_53 = 4478958764819082469LL;
_Bool var_54 = (_Bool)0;
signed char var_55 = (signed char)-96;
unsigned long long int var_56 = 9481514001484131873ULL;
unsigned short var_57 = (unsigned short)48323;
unsigned long long int var_58 = 7798243310176403145ULL;
int var_59 = 1284000621;
int var_60 = -1484549326;
unsigned char var_61 = (unsigned char)57;
unsigned int var_62 = 3791732428U;
int var_63 = 879811875;
unsigned char var_64 = (unsigned char)244;
_Bool var_65 = (_Bool)0;
short var_66 = (short)-12865;
short var_67 = (short)-12342;
unsigned char var_68 = (unsigned char)122;
short var_69 = (short)5751;
unsigned char arr_0 [24] ;
long long int arr_1 [24] ;
unsigned char arr_2 [22] ;
unsigned long long int arr_4 [22] [22] ;
unsigned long long int arr_5 [22] [22] ;
unsigned long long int arr_7 [22] ;
long long int arr_8 [22] ;
long long int arr_9 [22] [22] [22] ;
unsigned int arr_10 [22] [22] ;
short arr_11 [22] ;
unsigned long long int arr_13 [22] [22] [22] [22] ;
unsigned char arr_14 [22] ;
unsigned long long int arr_19 [22] ;
unsigned short arr_20 [22] [22] [22] [22] ;
signed char arr_21 [22] ;
short arr_23 [22] [22] [22] [22] ;
long long int arr_24 [22] [22] [22] ;
unsigned int arr_26 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_27 [22] [22] [22] [22] [22] ;
short arr_34 [22] ;
unsigned int arr_36 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_40 [22] ;
unsigned int arr_41 [22] [22] [22] ;
long long int arr_44 [22] ;
unsigned short arr_45 [22] ;
signed char arr_46 [22] [22] [22] ;
unsigned int arr_48 [22] [22] ;
unsigned long long int arr_56 [22] [22] ;
signed char arr_60 [22] [22] [22] [22] [22] ;
unsigned int arr_72 [22] [22] [22] [22] ;
short arr_73 [22] [22] ;
short arr_75 [22] [22] [22] [22] ;
unsigned char arr_76 [22] [22] [22] [22] [22] ;
unsigned long long int arr_77 [22] [22] [22] [22] [22] ;
long long int arr_82 [22] ;
short arr_84 [22] [22] [22] [22] ;
unsigned char arr_92 [22] [22] [22] [22] [22] ;
signed char arr_98 [22] [22] [22] [22] [22] ;
_Bool arr_15 [22] [22] [22] ;
long long int arr_16 [22] ;
signed char arr_22 [22] ;
unsigned short arr_30 [22] [22] ;
unsigned char arr_42 [22] [22] [22] ;
unsigned short arr_49 [22] ;
unsigned long long int arr_69 [22] [22] [22] [22] [22] ;
unsigned char arr_79 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_93 [22] [22] [22] ;
signed char arr_107 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 5409150791587877015LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 15005849327528479797ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1594797750276235110ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3727793199956786219ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -1780625177339997123LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5073097097474598663LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 1456310345U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)-11067;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 846358383937253126ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 13479030192107616812ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49934;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)30894 : (short)26528;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8976715030514461990LL : 2176449197582420157LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2748769671U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 11699116397134354472ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = (short)-7871;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 751440334U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 3344329333U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_44 [i_0] = -7259271445924788293LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_45 [i_0] = (unsigned short)32379;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_48 [i_0] [i_1] = 2284861878U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_56 [i_0] [i_1] = (i_1 % 2 == 0) ? 4692070379560905730ULL : 7741957050300166078ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = 2958162041U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_73 [i_0] [i_1] = (short)6100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_75 [i_0] [i_1] [i_2] [i_3] = (short)-24142;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = 11009591496467976830ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_82 [i_0] = -146318425232227090LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (short)24440;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_98 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = -2176892201745854460LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18582 : (unsigned short)15189;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_49 [i_0] = (unsigned short)23073;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = 15906625625162938069ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_107 [i_0] = (signed char)-19;
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
    hash(&seed, var_68);
    hash(&seed, var_69);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_93 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_107 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
