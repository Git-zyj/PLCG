#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29000;
short var_1 = (short)-3830;
unsigned short var_3 = (unsigned short)48476;
unsigned short var_4 = (unsigned short)15853;
short var_5 = (short)29886;
int var_6 = -418949567;
int var_7 = -1761712383;
int var_9 = 1653090463;
int var_10 = -1235661784;
int var_11 = 974441958;
unsigned short var_12 = (unsigned short)60300;
short var_14 = (short)-5637;
short var_15 = (short)6839;
short var_16 = (short)-18604;
unsigned long long int var_18 = 16856322727421674803ULL;
int zero = 0;
short var_19 = (short)-30515;
short var_20 = (short)-25778;
int var_21 = 1566348768;
unsigned long long int var_22 = 17673611726375380989ULL;
short var_23 = (short)11989;
int var_24 = 313201740;
short var_25 = (short)-28102;
unsigned short var_26 = (unsigned short)62677;
unsigned short var_27 = (unsigned short)6710;
unsigned long long int var_28 = 10635687775755601892ULL;
short var_29 = (short)-29336;
short var_30 = (short)9229;
short var_31 = (short)24076;
short var_32 = (short)-683;
short var_33 = (short)-6187;
int var_34 = 390521072;
short var_35 = (short)16047;
unsigned long long int var_36 = 6763620720862016442ULL;
int var_37 = -1343987970;
unsigned long long int var_38 = 9302267839049461872ULL;
unsigned long long int var_39 = 2484821894949131605ULL;
unsigned long long int var_40 = 2138586215965932357ULL;
short var_41 = (short)8464;
short var_42 = (short)31236;
short var_43 = (short)-27331;
unsigned long long int var_44 = 8373236112758392808ULL;
int var_45 = 1159695046;
int var_46 = -805896426;
unsigned long long int var_47 = 17625750846904567474ULL;
unsigned short var_48 = (unsigned short)44161;
unsigned long long int var_49 = 9140125482040530783ULL;
unsigned short var_50 = (unsigned short)17971;
unsigned short var_51 = (unsigned short)20679;
short var_52 = (short)-28317;
unsigned short var_53 = (unsigned short)11875;
unsigned long long int var_54 = 2837966077333613955ULL;
unsigned long long int var_55 = 15662086455924164213ULL;
unsigned long long int var_56 = 5286412907312414200ULL;
unsigned long long int var_57 = 16187419014788837792ULL;
short var_58 = (short)9796;
int var_59 = 1034527485;
int var_60 = -431979387;
unsigned long long int var_61 = 9233026018312798827ULL;
unsigned short var_62 = (unsigned short)13580;
unsigned long long int var_63 = 17243541792064716449ULL;
unsigned long long int var_64 = 15495358235841222280ULL;
short var_65 = (short)-10730;
unsigned long long int var_66 = 11913644857896515376ULL;
short var_67 = (short)31853;
short var_68 = (short)29313;
short var_69 = (short)3735;
int var_70 = 1386064753;
unsigned short var_71 = (unsigned short)12095;
unsigned short var_72 = (unsigned short)40293;
unsigned long long int arr_0 [18] ;
short arr_1 [18] ;
short arr_2 [18] ;
unsigned long long int arr_3 [18] ;
short arr_6 [18] ;
short arr_8 [18] [18] ;
short arr_10 [25] [25] ;
int arr_11 [25] ;
unsigned long long int arr_12 [25] [25] ;
int arr_14 [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] ;
int arr_16 [25] ;
unsigned short arr_17 [25] ;
int arr_18 [25] [25] ;
short arr_19 [25] [25] [25] ;
short arr_20 [25] [25] [25] [25] ;
unsigned long long int arr_22 [25] [25] ;
unsigned long long int arr_23 [25] [25] [25] [25] ;
short arr_24 [25] ;
unsigned long long int arr_25 [25] [25] ;
short arr_26 [25] [25] [25] ;
unsigned long long int arr_27 [25] [25] [25] ;
unsigned short arr_28 [25] [25] [25] ;
short arr_31 [25] ;
int arr_33 [25] [25] ;
unsigned long long int arr_35 [25] ;
int arr_37 [25] [25] [25] ;
short arr_39 [25] ;
unsigned long long int arr_41 [25] [25] [25] ;
short arr_52 [25] [25] [25] ;
short arr_54 [25] [25] [25] [25] ;
unsigned short arr_58 [25] [25] [25] [25] ;
unsigned short arr_60 [25] [25] [25] [25] ;
unsigned short arr_63 [25] [25] [25] [25] [25] ;
short arr_74 [16] [16] [16] ;
unsigned long long int arr_75 [16] [16] [16] ;
short arr_76 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_32 [25] [25] [25] ;
int arr_64 [25] [25] ;
short arr_67 [25] [25] [25] ;
unsigned long long int arr_84 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2090506138121754743ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-21269;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-7336;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 15155946870512886454ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)31366 : (short)15080;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-2724 : (short)-13372;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-24447;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1682567938;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 12589683106615618594ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = -57111017;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 12385898060281448677ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 804101629 : 1197553243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22087 : (unsigned short)8443;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 1718162616;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-2799 : (short)-17150;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-12231 : (short)-4763;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 10082438418683931980ULL : 13866445556892609169ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 18145105775316201937ULL : 15865739803707546739ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (short)-9425 : (short)3674;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = 6848134505051868931ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)25938;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 14439660003764161750ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned short)32133;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (short)23621;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? -156084568 : -1680817771;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 10824436190011333961ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1630771897 : 1184055184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (short)-12252 : (short)12723;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10908436194647402640ULL : 14558655342097608233ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (short)-21993;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (short)17885;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31301;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57587;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)28691;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = (short)-18824;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2861521029133750497ULL : 14845103815954195912ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-10682 : (short)-6193;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)52372;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_64 [i_0] [i_1] = (i_0 % 2 == 0) ? -1745451807 : 1565743243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-5046 : (short)-5736;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_84 [i_0] = (i_0 % 2 == 0) ? 11708363246573809482ULL : 15939797912359007441ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_67 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_84 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
