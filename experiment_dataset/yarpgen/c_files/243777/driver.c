#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22715;
unsigned long long int var_1 = 2318951966409043727ULL;
short var_2 = (short)29473;
short var_4 = (short)32763;
unsigned long long int var_5 = 7429188644992497040ULL;
unsigned long long int var_6 = 15368347865464793334ULL;
unsigned long long int var_7 = 3994532640645141389ULL;
unsigned long long int var_8 = 8555991435655719093ULL;
unsigned int var_9 = 2018210739U;
unsigned long long int var_10 = 8389088468654617711ULL;
unsigned int var_12 = 3095459572U;
unsigned long long int var_13 = 11042304834203001807ULL;
unsigned long long int var_14 = 17795862814026320859ULL;
unsigned long long int var_15 = 3483976280466767507ULL;
unsigned long long int var_16 = 3933802155574439327ULL;
unsigned int var_17 = 1559008304U;
int zero = 0;
unsigned long long int var_19 = 4741736391929636994ULL;
unsigned long long int var_20 = 11244766838587890191ULL;
unsigned int var_21 = 3250272449U;
unsigned long long int var_22 = 14401050435264813701ULL;
unsigned long long int var_23 = 6124744287414653822ULL;
unsigned long long int var_24 = 6345852553426594667ULL;
short var_25 = (short)-1721;
unsigned int var_26 = 134111396U;
unsigned long long int var_27 = 11054847203617324684ULL;
unsigned int var_28 = 257046539U;
short var_29 = (short)-27737;
unsigned long long int var_30 = 14071597027455016413ULL;
unsigned long long int var_31 = 17398727358491653254ULL;
unsigned long long int var_32 = 4587135708917851016ULL;
unsigned long long int var_33 = 12832866078149240593ULL;
short var_34 = (short)-5715;
unsigned long long int var_35 = 8223239837265599424ULL;
short var_36 = (short)15320;
unsigned long long int var_37 = 12049200349020392730ULL;
unsigned long long int var_38 = 13687379546577118124ULL;
unsigned int var_39 = 2367781869U;
unsigned int var_40 = 421403148U;
unsigned int var_41 = 3847899209U;
unsigned long long int var_42 = 2892978653066454049ULL;
unsigned int var_43 = 741525588U;
unsigned long long int var_44 = 11235873494296160753ULL;
unsigned int var_45 = 38962669U;
unsigned long long int var_46 = 16878163757415170489ULL;
unsigned long long int var_47 = 13066365961109591807ULL;
unsigned int var_48 = 970326660U;
unsigned int var_49 = 4056647322U;
unsigned int var_50 = 2105395335U;
short var_51 = (short)17415;
unsigned long long int var_52 = 3419621400792767052ULL;
unsigned int var_53 = 1761067667U;
unsigned int var_54 = 2713330221U;
unsigned long long int var_55 = 5748196173915950787ULL;
unsigned long long int var_56 = 7157487596797506673ULL;
unsigned long long int var_57 = 2621494959344982884ULL;
unsigned int var_58 = 4178851239U;
unsigned int var_59 = 3651215994U;
short var_60 = (short)28064;
unsigned long long int var_61 = 12800611477118905077ULL;
unsigned int var_62 = 3906058669U;
unsigned int var_63 = 412267688U;
unsigned long long int var_64 = 4766419551392764278ULL;
unsigned int var_65 = 3391608355U;
unsigned long long int var_66 = 5717666817423325764ULL;
unsigned long long int var_67 = 14382364054668993808ULL;
short var_68 = (short)-15249;
unsigned long long int var_69 = 12202982712691859275ULL;
unsigned long long int var_70 = 15278405294341710372ULL;
unsigned long long int var_71 = 10342378200503191097ULL;
unsigned long long int var_72 = 9646112199759409004ULL;
unsigned int var_73 = 4125045201U;
unsigned long long int var_74 = 16751463890687265656ULL;
unsigned long long int var_75 = 18161611880706494049ULL;
unsigned long long int var_76 = 12244696746802469729ULL;
unsigned long long int var_77 = 3367167624595434884ULL;
short var_78 = (short)-11958;
unsigned long long int var_79 = 18012095547863221543ULL;
short var_80 = (short)-3954;
unsigned long long int var_81 = 12965775389718346630ULL;
short var_82 = (short)23052;
unsigned long long int var_83 = 12848543899352234906ULL;
unsigned long long int var_84 = 13184075515610005556ULL;
unsigned long long int arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
unsigned long long int arr_3 [16] [16] ;
unsigned long long int arr_4 [16] ;
short arr_6 [12] ;
short arr_9 [12] [12] [12] ;
unsigned long long int arr_11 [12] ;
unsigned long long int arr_12 [12] ;
unsigned long long int arr_14 [12] [12] [12] [12] ;
unsigned long long int arr_16 [10] ;
unsigned long long int arr_19 [10] [10] [10] ;
unsigned long long int arr_20 [10] ;
unsigned long long int arr_22 [10] [10] [10] [10] ;
unsigned int arr_28 [14] ;
unsigned long long int arr_29 [14] ;
unsigned long long int arr_30 [14] [14] [14] ;
unsigned long long int arr_31 [14] [14] ;
unsigned long long int arr_32 [14] [14] ;
short arr_33 [14] ;
unsigned long long int arr_35 [14] ;
short arr_36 [14] [14] [14] [14] ;
unsigned long long int arr_37 [14] [14] [14] [14] [14] ;
unsigned long long int arr_39 [14] [14] [14] [14] ;
unsigned long long int arr_42 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_43 [14] [14] [14] ;
unsigned long long int arr_44 [14] [14] ;
short arr_45 [14] ;
unsigned int arr_46 [14] ;
unsigned int arr_48 [14] [14] [14] ;
unsigned int arr_52 [14] ;
unsigned int arr_53 [14] [14] [14] ;
unsigned long long int arr_54 [14] [14] [14] ;
unsigned long long int arr_55 [14] ;
unsigned long long int arr_57 [14] [14] ;
unsigned long long int arr_58 [14] ;
unsigned int arr_59 [14] [14] [14] ;
unsigned long long int arr_60 [14] ;
unsigned int arr_63 [14] [14] [14] ;
unsigned long long int arr_65 [14] [14] [14] [14] ;
short arr_66 [14] [14] [14] [14] ;
short arr_68 [14] [14] [14] [14] ;
unsigned long long int arr_69 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_72 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_73 [14] [14] [14] [14] ;
unsigned long long int arr_78 [14] [14] ;
unsigned long long int arr_79 [14] [14] [14] [14] [14] ;
unsigned long long int arr_86 [14] [14] ;
unsigned long long int arr_87 [14] [14] [14] [14] [14] ;
unsigned long long int arr_98 [14] [14] ;
short arr_99 [14] [14] [14] [14] ;
unsigned long long int arr_122 [16] ;
unsigned long long int arr_123 [16] ;
short arr_15 [12] ;
unsigned int arr_18 [10] [10] ;
unsigned long long int arr_25 [10] [10] [10] ;
short arr_26 [10] [10] [10] [10] ;
short arr_27 [10] ;
unsigned long long int arr_49 [14] ;
unsigned long long int arr_62 [14] ;
short arr_71 [14] [14] ;
unsigned int arr_74 [14] [14] [14] [14] ;
unsigned long long int arr_75 [14] [14] [14] [14] ;
unsigned long long int arr_82 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_85 [14] [14] ;
unsigned long long int arr_97 [14] ;
unsigned long long int arr_107 [14] [14] [14] [14] [14] ;
unsigned long long int arr_125 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 10332431494115603911ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 974663363U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10045022810288104427ULL : 15589984803834126528ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 13281703943727935804ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6292791053123659989ULL : 16567722550374873928ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-2088;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)10734;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 14518427774694823406ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 5368996689784692836ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 6612361917409337432ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 12150141408606788250ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 11116569959756384407ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 7762054588873939431ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 10533361021982421667ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 1931723589U : 1268697773U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 4770005570563691606ULL : 17530259389324055821ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12229898593672789096ULL : 14375430870571831375ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_31 [i_0] [i_1] = 4290826201158634164ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 10922374211474086428ULL : 388609444049509685ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = (short)-6906;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = 5371334886870676158ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)3386 : (short)30889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = 7672358372477674678ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 294424133637403291ULL : 55002099593436345ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10940557363172872514ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 8222808758153001342ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_44 [i_0] [i_1] = (i_0 % 2 == 0) ? 12839711292548752137ULL : 16488775484114764367ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (short)-4928 : (short)49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_46 [i_0] = 3843767044U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 729099252U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 2934566660U : 220331295U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 920202401U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 764912480754016262ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? 7277379237691240108ULL : 10455330598369630528ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_57 [i_0] [i_1] = 16787672520482221911ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_58 [i_0] = 17959133108196860329ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2848397562U : 3534003327U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_60 [i_0] = 7044808666055264275ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 475988133U : 3433893160U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = 9273808652208344140ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (short)20664;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)24355 : (short)23147;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1950833911243454111ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15129773997153955287ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = 1933294170U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_78 [i_0] [i_1] = 1535658148087224534ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 6315264968645281131ULL : 17854905038757026649ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_86 [i_0] [i_1] = 3600506333893649482ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_87 [i_0] [i_1] [i_2] [i_3] [i_4] = 2961645350489871095ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_98 [i_0] [i_1] = (i_1 % 2 == 0) ? 1224579071347300086ULL : 11292778786571079012ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_99 [i_0] [i_1] [i_2] [i_3] = (short)7839;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_122 [i_0] = 11001797791293412009ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_123 [i_0] = 3827191706175574972ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (short)-1724;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = 2743227192U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 13705524046044718867ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (short)-21018;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (short)-12757;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? 1881356653862998608ULL : 15657587333643845247ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_62 [i_0] = (i_0 % 2 == 0) ? 9560082320553093113ULL : 9514371614774339848ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_71 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25599 : (short)-17563;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 914563276U : 2719810441U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_75 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3500727536233073298ULL : 9304445544543568076ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 8012951409261755136ULL : 1653193021327629340ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_85 [i_0] [i_1] = (i_1 % 2 == 0) ? 4188556258417629150ULL : 9915764952940951403ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_97 [i_0] = (i_0 % 2 == 0) ? 6082153013632075010ULL : 14360652642023639410ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_107 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2038348509500778394ULL : 15025236840509352811ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_125 [i_0] = 2488055113319964288ULL;
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
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_71 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_74 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_75 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_85 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_97 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_107 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_125 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
