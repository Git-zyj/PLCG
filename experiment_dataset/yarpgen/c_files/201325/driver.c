#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2302867612U;
unsigned char var_1 = (unsigned char)99;
unsigned short var_2 = (unsigned short)48434;
long long int var_3 = 8722286376978255829LL;
long long int var_4 = -6191802176050439420LL;
unsigned int var_5 = 1884225337U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)8;
signed char var_8 = (signed char)-97;
long long int var_9 = 4876907874115056465LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)12236;
int zero = 0;
long long int var_12 = 7466241340731418420LL;
unsigned int var_13 = 1954741211U;
signed char var_14 = (signed char)-29;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17848858834086485915ULL;
short var_17 = (short)28588;
unsigned int var_18 = 1549177964U;
signed char var_19 = (signed char)8;
unsigned char var_20 = (unsigned char)169;
long long int var_21 = 7792063557111141044LL;
unsigned long long int var_22 = 15430125454747321948ULL;
unsigned long long int var_23 = 10012517932384568378ULL;
unsigned long long int var_24 = 16186355323990829082ULL;
int var_25 = 600775417;
long long int var_26 = 3542396225482563435LL;
unsigned long long int var_27 = 11405769095270223694ULL;
signed char var_28 = (signed char)-54;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 5976566563677975331ULL;
int var_31 = 1598149213;
signed char var_32 = (signed char)69;
short var_33 = (short)-26537;
long long int var_34 = 4443494957952738065LL;
short var_35 = (short)-18909;
short var_36 = (short)24778;
unsigned int var_37 = 2480223991U;
unsigned char var_38 = (unsigned char)249;
unsigned long long int var_39 = 17545730545686893233ULL;
_Bool var_40 = (_Bool)1;
unsigned int var_41 = 2586003167U;
signed char var_42 = (signed char)66;
unsigned short var_43 = (unsigned short)2730;
signed char var_44 = (signed char)3;
int var_45 = -1889983773;
unsigned int var_46 = 3263665875U;
long long int var_47 = -7256549105130342612LL;
long long int var_48 = 5955601916439342367LL;
int var_49 = -587853294;
short var_50 = (short)-11068;
unsigned char var_51 = (unsigned char)192;
short var_52 = (short)-9488;
unsigned long long int var_53 = 5834452522888394951ULL;
_Bool var_54 = (_Bool)0;
unsigned int var_55 = 1939016909U;
long long int var_56 = 6736214451735192740LL;
_Bool var_57 = (_Bool)0;
unsigned long long int var_58 = 16385379448754748494ULL;
unsigned char var_59 = (unsigned char)51;
unsigned long long int var_60 = 16368147776027576936ULL;
long long int var_61 = 5542281602985159575LL;
unsigned char var_62 = (unsigned char)243;
unsigned int var_63 = 3741832244U;
unsigned long long int var_64 = 5920354463612414817ULL;
unsigned char var_65 = (unsigned char)122;
_Bool var_66 = (_Bool)1;
unsigned short var_67 = (unsigned short)53138;
short var_68 = (short)-8057;
unsigned long long int var_69 = 11905684665365614880ULL;
unsigned short var_70 = (unsigned short)9711;
_Bool var_71 = (_Bool)1;
long long int var_72 = 1771501313401483794LL;
unsigned int var_73 = 4195560794U;
unsigned short var_74 = (unsigned short)5766;
unsigned int var_75 = 4057407560U;
unsigned long long int var_76 = 10675935048908326132ULL;
signed char var_77 = (signed char)126;
unsigned int var_78 = 2853956803U;
unsigned int var_79 = 34080900U;
unsigned char var_80 = (unsigned char)236;
short arr_0 [15] ;
long long int arr_1 [15] ;
signed char arr_2 [15] ;
unsigned char arr_3 [25] ;
unsigned int arr_4 [25] ;
unsigned long long int arr_7 [20] ;
signed char arr_9 [20] ;
unsigned long long int arr_13 [20] [20] [20] ;
_Bool arr_14 [20] [20] ;
signed char arr_15 [20] [20] [20] [20] [20] ;
short arr_16 [20] [20] [20] [20] [20] ;
long long int arr_18 [20] [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_23 [20] [20] ;
unsigned short arr_25 [20] [20] ;
signed char arr_27 [20] [20] [20] [20] ;
unsigned int arr_29 [20] [20] [20] ;
unsigned int arr_30 [20] [20] [20] [20] ;
unsigned int arr_31 [20] ;
unsigned int arr_32 [20] [20] [20] [20] ;
unsigned int arr_33 [20] [20] [20] [20] [20] ;
unsigned short arr_36 [20] [20] [20] [20] [20] ;
unsigned int arr_39 [20] [20] [20] [20] ;
long long int arr_40 [20] [20] [20] [20] ;
int arr_48 [20] [20] ;
signed char arr_49 [20] ;
unsigned char arr_51 [20] [20] ;
unsigned short arr_52 [20] [20] ;
int arr_55 [20] [20] [20] [20] ;
unsigned int arr_57 [20] [20] [20] [20] ;
signed char arr_58 [20] ;
unsigned long long int arr_59 [20] [20] [20] [20] [20] ;
short arr_61 [20] [20] [20] ;
unsigned int arr_63 [20] ;
unsigned short arr_66 [20] [20] [20] [20] [20] ;
unsigned char arr_73 [20] [20] [20] [20] ;
unsigned long long int arr_81 [20] [20] [20] [20] [20] ;
_Bool arr_88 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)16677;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -8847311728196080363LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 275615883U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 16749671420313253729ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 17135139202564832478ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-101 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)6832;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? -4197690857453245430LL : 4211909442770844211LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = 17078755631741290029ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)15523;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-71 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 4039097272U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2870362611U : 1637380100U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 3057458448U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3007522965U : 1191975714U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1486964849U : 349400906U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)3399;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 2283116192U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 5389912935777273233LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_48 [i_0] [i_1] = -468022042;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_49 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_51 [i_0] [i_1] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_52 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)56641 : (unsigned short)20742;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = 1586765147;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3044094562U : 3749918002U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_58 [i_0] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = 14294161192482018658ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)18746 : (short)30562;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_63 [i_0] = (i_0 % 2 == 0) ? 1658006138U : 2514598401U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)21721 : (unsigned short)33975;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)116 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 6837642075218098562ULL : 6419121237974597332ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_88 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_80);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
