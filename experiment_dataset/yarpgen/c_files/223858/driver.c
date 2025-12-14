#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4984617480052208120LL;
short var_1 = (short)6583;
unsigned short var_2 = (unsigned short)22354;
int var_3 = -614693541;
unsigned char var_4 = (unsigned char)146;
unsigned short var_5 = (unsigned short)24693;
short var_6 = (short)2286;
unsigned char var_7 = (unsigned char)10;
unsigned long long int var_8 = 10790393431085423376ULL;
int var_9 = 1039093646;
signed char var_10 = (signed char)-122;
int zero = 0;
unsigned char var_11 = (unsigned char)44;
int var_12 = -1091453855;
signed char var_13 = (signed char)120;
int var_14 = 884343338;
unsigned long long int var_15 = 10009879309302008716ULL;
int var_16 = 1391037997;
unsigned short var_17 = (unsigned short)7867;
unsigned long long int var_18 = 14634753962648718256ULL;
int var_19 = 222161794;
unsigned long long int var_20 = 16419230149580721914ULL;
int var_21 = 475514669;
int var_22 = -889101479;
long long int var_23 = 4546333469947276252LL;
unsigned short var_24 = (unsigned short)3572;
short var_25 = (short)-2651;
unsigned short var_26 = (unsigned short)18272;
long long int var_27 = -3871429636422934745LL;
unsigned short var_28 = (unsigned short)35932;
int var_29 = -685872723;
long long int var_30 = 7735171173470254516LL;
long long int var_31 = 2818679272643191075LL;
unsigned short var_32 = (unsigned short)40575;
unsigned short var_33 = (unsigned short)16628;
short var_34 = (short)10800;
signed char var_35 = (signed char)-16;
long long int var_36 = 538037209078263372LL;
int var_37 = 1151504515;
short var_38 = (short)-17706;
unsigned long long int var_39 = 5396668448866530735ULL;
short var_40 = (short)-23859;
int var_41 = -720718679;
long long int var_42 = 9114163567931923878LL;
unsigned long long int var_43 = 17513357710530523848ULL;
unsigned long long int var_44 = 11089714858270083531ULL;
long long int var_45 = -1302135686496600515LL;
unsigned char var_46 = (unsigned char)33;
long long int var_47 = 637364747064583662LL;
long long int var_48 = 77118591604380414LL;
signed char var_49 = (signed char)-34;
signed char var_50 = (signed char)39;
int var_51 = -1986544487;
short var_52 = (short)27902;
long long int var_53 = -4818951318863796526LL;
int var_54 = 477452308;
unsigned short var_55 = (unsigned short)20866;
int var_56 = -2135482360;
unsigned short var_57 = (unsigned short)19086;
short var_58 = (short)11176;
signed char var_59 = (signed char)22;
signed char var_60 = (signed char)-38;
unsigned short var_61 = (unsigned short)8286;
unsigned short var_62 = (unsigned short)36777;
short var_63 = (short)-10473;
int var_64 = 1408776623;
int var_65 = 723973532;
unsigned short var_66 = (unsigned short)64673;
signed char var_67 = (signed char)116;
int var_68 = -1668638448;
int var_69 = -1804015836;
unsigned char var_70 = (unsigned char)142;
int var_71 = 320884735;
signed char var_72 = (signed char)112;
unsigned char var_73 = (unsigned char)250;
short var_74 = (short)-25205;
unsigned char var_75 = (unsigned char)82;
int var_76 = -722313193;
int var_77 = 2110081824;
unsigned short var_78 = (unsigned short)30134;
int var_79 = 1796020507;
signed char arr_1 [10] ;
int arr_2 [10] ;
unsigned short arr_3 [10] ;
signed char arr_5 [10] [10] ;
signed char arr_7 [10] ;
unsigned long long int arr_8 [10] [10] [10] ;
long long int arr_9 [10] ;
long long int arr_10 [10] ;
long long int arr_11 [10] [10] ;
unsigned short arr_12 [10] [10] ;
unsigned long long int arr_13 [10] ;
signed char arr_14 [10] ;
unsigned long long int arr_15 [10] ;
unsigned short arr_16 [10] ;
int arr_18 [10] [10] [10] ;
unsigned long long int arr_19 [10] ;
long long int arr_21 [10] [10] [10] [10] ;
long long int arr_24 [10] [10] [10] [10] ;
int arr_26 [10] ;
long long int arr_28 [10] [10] [10] ;
int arr_29 [10] ;
signed char arr_32 [24] [24] ;
unsigned short arr_33 [24] ;
unsigned char arr_34 [24] [24] ;
int arr_35 [24] ;
int arr_36 [24] [24] ;
unsigned char arr_37 [24] [24] ;
short arr_39 [24] [24] [24] ;
unsigned char arr_40 [24] [24] [24] [24] ;
unsigned char arr_41 [24] [24] ;
int arr_42 [24] [24] [24] [24] [24] ;
int arr_43 [24] [24] [24] [24] ;
unsigned char arr_44 [24] [24] [24] ;
long long int arr_45 [24] [24] ;
unsigned long long int arr_48 [24] [24] [24] [24] ;
unsigned short arr_49 [24] [24] [24] [24] [24] [24] ;
unsigned short arr_50 [24] [24] [24] [24] [24] ;
int arr_51 [24] [24] [24] [24] [24] [24] [24] ;
short arr_52 [24] [24] [24] [24] [24] ;
int arr_54 [24] [24] [24] [24] [24] ;
int arr_55 [24] [24] [24] [24] [24] ;
short arr_56 [24] [24] [24] [24] [24] [24] ;
signed char arr_57 [24] ;
int arr_59 [24] ;
int arr_61 [24] ;
signed char arr_62 [24] [24] [24] ;
long long int arr_65 [24] [24] [24] [24] [24] ;
int arr_66 [24] [24] ;
int arr_75 [24] [24] [24] [24] ;
unsigned short arr_76 [24] [24] [24] ;
short arr_78 [24] [24] [24] [24] ;
long long int arr_81 [24] [24] ;
int arr_84 [24] [24] [24] ;
unsigned short arr_85 [24] [24] [24] ;
signed char arr_88 [24] [24] [24] [24] ;
int arr_92 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_96 [24] [24] ;
int arr_104 [24] ;
unsigned char arr_31 [10] [10] [10] ;
int arr_46 [24] [24] [24] [24] ;
int arr_58 [24] [24] [24] [24] ;
long long int arr_72 [24] [24] [24] [24] ;
unsigned long long int arr_93 [24] [24] ;
signed char arr_100 [24] [24] [24] [24] [24] [24] ;
short arr_105 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1728877176;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)31256;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 14459719394644108539ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 2143023706273989998LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -2664826493852141563LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 310518805222175956LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)2552;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 6359524374621316812ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 1460250956497469658ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (unsigned short)7139;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1912602032;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = 9522223076210797539ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -480802420223553347LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 5402293036395696650LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = -1588618188;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 2590095520863936385LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = 186459820;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (unsigned short)53230;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = 511739658;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_36 [i_0] [i_1] = -361946883;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (short)982;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = -1630246402;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1871710504 : 383861697;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? 5875712363569729110LL : 7348320416135926821LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5717689568343133445ULL : 6570820446543169563ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)13909 : (unsigned short)62838;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)51732 : (unsigned short)62700;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1584266475;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-17246;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1826146852 : -2092132239;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = -2041999067;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)-22367 : (short)-14138;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_59 [i_0] = 2132655289;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_61 [i_0] = 636706067;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 4702007267477523053LL : -936562350540478653LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_66 [i_0] [i_1] = 1604540355;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_75 [i_0] [i_1] [i_2] [i_3] = -595398457;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = (unsigned short)5395;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (short)29930;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_81 [i_0] [i_1] = -2089135332850782020LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_84 [i_0] [i_1] [i_2] = -1029885768;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_85 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)8898 : (unsigned short)22165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_88 [i_0] [i_1] [i_2] [i_3] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 20845648 : 262823249;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_96 [i_0] [i_1] = 12753144845236932782ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_104 [i_0] = 760529960;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -136036730 : 1133613102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2125025497 : -184924551;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = 1675107508407942900LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_93 [i_0] [i_1] = (i_1 % 2 == 0) ? 6426769221747845304ULL : 9401314815329512672ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_105 [i_0] = (short)-863;
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
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_72 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_93 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_105 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
