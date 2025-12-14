#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1645554531;
int var_1 = -761180014;
int var_2 = -1826328287;
int var_3 = -444065751;
unsigned int var_4 = 826560760U;
int var_5 = 1413244628;
unsigned long long int var_6 = 15218099296752572019ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)5;
unsigned int var_9 = 2705938118U;
unsigned long long int var_10 = 12836599506518125079ULL;
unsigned int var_11 = 304003598U;
unsigned int var_12 = 2609376809U;
int var_13 = -24104872;
unsigned long long int var_14 = 16897109734162420251ULL;
unsigned long long int var_15 = 1113199559680642536ULL;
unsigned int var_16 = 3465097976U;
int zero = 0;
unsigned long long int var_17 = 17169640434347416373ULL;
unsigned int var_18 = 679826249U;
unsigned long long int var_19 = 2651279953329946797ULL;
int var_20 = 1414098490;
_Bool var_21 = (_Bool)0;
int var_22 = 271591858;
unsigned char var_23 = (unsigned char)37;
unsigned long long int var_24 = 1314958027488374793ULL;
unsigned long long int var_25 = 1685609303116426953ULL;
unsigned long long int var_26 = 2957828488404599470ULL;
int var_27 = 1965292739;
unsigned char var_28 = (unsigned char)235;
unsigned long long int var_29 = 15595449012067371550ULL;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 7148455830832751132ULL;
unsigned long long int var_32 = 13708063824271804096ULL;
_Bool var_33 = (_Bool)0;
int var_34 = -1643083379;
unsigned long long int var_35 = 3056145903534160458ULL;
unsigned long long int var_36 = 11706915051633639340ULL;
unsigned char var_37 = (unsigned char)6;
unsigned int var_38 = 2282616178U;
_Bool var_39 = (_Bool)1;
_Bool var_40 = (_Bool)0;
unsigned long long int var_41 = 7934584258605645044ULL;
int var_42 = -298860820;
unsigned long long int var_43 = 14655845085391815139ULL;
unsigned int var_44 = 3641696536U;
int var_45 = -1554878345;
unsigned char var_46 = (unsigned char)97;
_Bool var_47 = (_Bool)0;
int var_48 = -313230259;
unsigned long long int var_49 = 17451789805738514824ULL;
int var_50 = -1185271656;
unsigned long long int var_51 = 6754036479749014549ULL;
int var_52 = -1555351007;
unsigned char var_53 = (unsigned char)68;
unsigned long long int var_54 = 1200925738659390712ULL;
_Bool var_55 = (_Bool)1;
unsigned int var_56 = 189518265U;
int var_57 = 2114444449;
_Bool var_58 = (_Bool)0;
_Bool var_59 = (_Bool)0;
unsigned long long int var_60 = 2852989559096547930ULL;
int var_61 = 828880938;
unsigned char var_62 = (unsigned char)171;
_Bool var_63 = (_Bool)1;
int var_64 = 914178598;
unsigned char var_65 = (unsigned char)243;
unsigned long long int var_66 = 2248308895389359550ULL;
_Bool var_67 = (_Bool)0;
_Bool var_68 = (_Bool)1;
unsigned int var_69 = 1299660275U;
unsigned long long int var_70 = 16572576607274014899ULL;
unsigned long long int var_71 = 1591206635486331815ULL;
unsigned long long int var_72 = 8261930934298165651ULL;
unsigned char var_73 = (unsigned char)28;
_Bool var_74 = (_Bool)1;
int var_75 = 778724016;
unsigned int var_76 = 94718882U;
unsigned long long int var_77 = 3732500960437389688ULL;
unsigned char var_78 = (unsigned char)126;
unsigned long long int var_79 = 5612900532229028588ULL;
unsigned long long int var_80 = 4042181405431531290ULL;
unsigned long long int var_81 = 1498223355062072899ULL;
unsigned long long int var_82 = 14303323482205226291ULL;
unsigned int var_83 = 1313519861U;
int var_84 = 1900082897;
_Bool var_85 = (_Bool)0;
int var_86 = -415779607;
_Bool var_87 = (_Bool)1;
_Bool var_88 = (_Bool)1;
int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned char arr_3 [19] ;
_Bool arr_4 [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] ;
_Bool arr_10 [19] [19] [19] ;
unsigned char arr_13 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_15 [19] [19] [19] [19] ;
int arr_17 [19] [19] [19] [19] ;
unsigned long long int arr_22 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_26 [19] [19] [19] [19] ;
unsigned int arr_28 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_29 [19] [19] [19] [19] ;
unsigned char arr_30 [19] [19] [19] [19] [19] ;
_Bool arr_31 [19] [19] [19] [19] [19] ;
_Bool arr_42 [19] ;
unsigned char arr_47 [19] [19] [19] [19] [19] [19] [19] ;
int arr_50 [19] [19] ;
_Bool arr_51 [19] [19] [19] [19] ;
_Bool arr_52 [19] [19] [19] ;
_Bool arr_61 [19] [19] [19] ;
unsigned long long int arr_75 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1084537456;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 11544542823006029973ULL : 18129667448063044010ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14851096605647379800ULL : 6504073328490505630ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1781461941431923628ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)196 : (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 4157599686U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1199042679;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13891541224372177608ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 15839460580554632208ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 837700421U : 67260857U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_42 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_50 [i_0] [i_1] = 849152614;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? 11324820179363911850ULL : 8859380709990353763ULL;
}

void checksum() {
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
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
