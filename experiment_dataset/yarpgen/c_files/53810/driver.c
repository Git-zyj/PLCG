#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
long long int var_1 = -4324261346040191124LL;
unsigned long long int var_2 = 6406526841079560394ULL;
unsigned char var_3 = (unsigned char)223;
short var_4 = (short)18251;
_Bool var_7 = (_Bool)1;
long long int var_9 = 6625583398406610206LL;
short var_12 = (short)17416;
unsigned int var_14 = 1925942563U;
long long int var_15 = 5600862657215258668LL;
long long int var_16 = -9032392944881396567LL;
long long int var_17 = -9024868570577041971LL;
unsigned char var_18 = (unsigned char)40;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)21062;
short var_22 = (short)27018;
unsigned char var_23 = (unsigned char)96;
unsigned char var_24 = (unsigned char)77;
unsigned long long int var_25 = 5522167729603814241ULL;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3529882904U;
short var_28 = (short)30559;
unsigned char var_29 = (unsigned char)212;
unsigned char var_30 = (unsigned char)115;
long long int var_31 = -243651119053437324LL;
long long int var_32 = 8038718829289735096LL;
signed char var_33 = (signed char)39;
long long int var_34 = -5716894317328854502LL;
unsigned char var_35 = (unsigned char)152;
unsigned char var_36 = (unsigned char)139;
signed char var_37 = (signed char)10;
long long int var_38 = -3917131165917032049LL;
short var_39 = (short)1092;
unsigned char var_40 = (unsigned char)43;
signed char var_41 = (signed char)18;
long long int var_42 = -6581395661707341823LL;
long long int var_43 = -6793078741397436650LL;
long long int var_44 = -1532607373901106600LL;
long long int var_45 = -8323008312250227609LL;
unsigned long long int var_46 = 2590315029920535946ULL;
unsigned int var_47 = 1455940480U;
long long int var_48 = -4205117712495196585LL;
unsigned char var_49 = (unsigned char)179;
long long int var_50 = 3615980592115679351LL;
unsigned char var_51 = (unsigned char)95;
short var_52 = (short)21821;
unsigned long long int var_53 = 15845570280774309499ULL;
unsigned long long int var_54 = 13702611228474310789ULL;
_Bool var_55 = (_Bool)0;
long long int var_56 = -770681415267754162LL;
short var_57 = (short)29695;
long long int var_58 = 2743806021665138459LL;
long long int var_59 = -4445818508206932551LL;
unsigned int var_60 = 3935287648U;
unsigned char var_61 = (unsigned char)150;
short var_62 = (short)-11854;
short var_63 = (short)-29309;
unsigned long long int var_64 = 17390434456582112633ULL;
_Bool var_65 = (_Bool)1;
long long int var_66 = 6947881960279325661LL;
short var_67 = (short)20290;
_Bool var_68 = (_Bool)1;
unsigned char var_69 = (unsigned char)193;
long long int var_70 = 5205116237904692534LL;
signed char var_71 = (signed char)-62;
unsigned char var_72 = (unsigned char)66;
long long int arr_0 [20] ;
long long int arr_1 [20] ;
unsigned char arr_3 [20] [20] ;
short arr_4 [20] ;
unsigned int arr_6 [20] [20] [20] ;
long long int arr_10 [20] [20] [20] [20] [20] ;
long long int arr_12 [20] [20] [20] [20] ;
short arr_14 [20] ;
unsigned char arr_16 [20] [20] ;
unsigned char arr_20 [20] ;
unsigned char arr_21 [20] [20] ;
unsigned char arr_22 [20] [20] [20] [20] ;
unsigned int arr_23 [20] [20] ;
short arr_24 [20] [20] [20] [20] [20] [20] ;
signed char arr_27 [20] [20] [20] [20] [20] ;
long long int arr_28 [20] [20] [20] [20] ;
long long int arr_30 [20] [20] ;
unsigned long long int arr_31 [20] [20] [20] [20] ;
_Bool arr_32 [20] [20] [20] [20] ;
long long int arr_35 [20] ;
signed char arr_41 [20] ;
long long int arr_42 [20] ;
unsigned char arr_49 [18] ;
unsigned char arr_60 [18] ;
unsigned char arr_65 [18] [18] ;
_Bool arr_80 [18] [18] [18] [18] [18] [18] ;
signed char arr_2 [20] [20] ;
unsigned char arr_15 [20] [20] [20] [20] ;
long long int arr_29 [20] [20] ;
unsigned char arr_38 [20] [20] [20] ;
long long int arr_39 [20] [20] ;
unsigned char arr_48 [20] ;
long long int arr_51 [18] ;
unsigned long long int arr_57 [18] [18] [18] ;
unsigned char arr_66 [18] ;
signed char arr_87 [18] [18] ;
long long int arr_88 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1941610507812614034LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -7383553389712544142LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-11816;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3265317961U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -1634549580709563344LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 5687863038476769629LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-13758 : (short)8534;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = 1551628681U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-1049;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -7002618919578966601LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_30 [i_0] [i_1] = -1020640232507898744LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 5179890699847095125ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = -397910434914225968LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = 343591296548016299LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_49 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_60 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_65 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)106 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = 5600684090157601420LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_39 [i_0] [i_1] = -2462675931210564030LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_51 [i_0] = 3183890829184761740LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12060300404820313337ULL : 6073448956374214421ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_66 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_87 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_88 [i_0] [i_1] [i_2] [i_3] = 3587703724219628143LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_87 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_88 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
