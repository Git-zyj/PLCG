#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 397279549610622045LL;
unsigned int var_1 = 2545002406U;
unsigned char var_2 = (unsigned char)135;
unsigned int var_3 = 2148527306U;
int var_4 = 1214016214;
int var_5 = 1227040128;
unsigned long long int var_6 = 2851146622961758042ULL;
unsigned short var_7 = (unsigned short)47884;
int var_8 = 212769492;
unsigned long long int var_9 = 4549766562344797300ULL;
int var_10 = 1765462420;
int var_11 = 1120039938;
unsigned int var_12 = 2383721547U;
long long int var_13 = 8141706612722267992LL;
int zero = 0;
short var_14 = (short)27793;
unsigned short var_15 = (unsigned short)2430;
long long int var_16 = -2512220555033084525LL;
unsigned int var_17 = 2364944274U;
long long int var_18 = -3627669728668379818LL;
unsigned int var_19 = 2762952719U;
unsigned int var_20 = 2241383510U;
unsigned int var_21 = 328070048U;
long long int var_22 = -1732725632335199944LL;
unsigned int var_23 = 3867092355U;
unsigned int var_24 = 287418865U;
short var_25 = (short)-10229;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)11840;
long long int var_28 = 6593295290257687880LL;
long long int var_29 = -3474290863473538833LL;
unsigned long long int var_30 = 11370675544148588253ULL;
short var_31 = (short)22198;
int var_32 = 809029322;
unsigned char var_33 = (unsigned char)44;
long long int var_34 = -5780047831868052324LL;
int var_35 = 775837244;
short var_36 = (short)5580;
_Bool var_37 = (_Bool)1;
long long int var_38 = 7397939085897380993LL;
short var_39 = (short)-2832;
unsigned short var_40 = (unsigned short)46854;
int var_41 = 2019202942;
_Bool var_42 = (_Bool)1;
unsigned char var_43 = (unsigned char)4;
int var_44 = -1358549508;
unsigned int var_45 = 991232647U;
long long int var_46 = 190403827570158331LL;
long long int var_47 = 7852483175396200589LL;
unsigned char var_48 = (unsigned char)135;
unsigned int var_49 = 3476595346U;
short var_50 = (short)-413;
_Bool var_51 = (_Bool)1;
unsigned char var_52 = (unsigned char)185;
long long int var_53 = 2031291676159625038LL;
unsigned long long int var_54 = 16726052013780201457ULL;
unsigned char var_55 = (unsigned char)25;
unsigned long long int var_56 = 3356960543424876536ULL;
signed char var_57 = (signed char)90;
long long int var_58 = 7848163960179484246LL;
unsigned short var_59 = (unsigned short)40782;
int var_60 = 392156341;
unsigned long long int var_61 = 3475970095743055180ULL;
long long int var_62 = -8120138305534734497LL;
_Bool var_63 = (_Bool)0;
unsigned long long int var_64 = 9042436744473613894ULL;
int var_65 = -836279820;
unsigned short var_66 = (unsigned short)12300;
short var_67 = (short)7281;
signed char var_68 = (signed char)-5;
long long int var_69 = -3452376049403955699LL;
_Bool var_70 = (_Bool)0;
_Bool var_71 = (_Bool)1;
unsigned long long int var_72 = 7797513476407711747ULL;
unsigned short arr_1 [18] [18] ;
unsigned short arr_2 [18] ;
unsigned long long int arr_4 [18] ;
unsigned long long int arr_5 [18] [18] [18] [18] ;
signed char arr_6 [18] ;
unsigned char arr_7 [18] [18] [18] ;
short arr_9 [18] [18] [18] ;
_Bool arr_11 [18] ;
int arr_15 [18] [18] [18] [18] [18] ;
signed char arr_16 [18] [18] ;
long long int arr_18 [18] [18] ;
int arr_23 [18] [18] [18] ;
signed char arr_24 [18] [18] [18] [18] ;
unsigned char arr_25 [18] [18] [18] [18] [18] ;
unsigned short arr_26 [18] [18] [18] [18] [18] ;
signed char arr_35 [10] [10] [10] ;
short arr_41 [10] ;
unsigned long long int arr_43 [10] [10] [10] [10] ;
signed char arr_45 [10] [10] [10] [10] ;
signed char arr_46 [10] [10] [10] [10] ;
signed char arr_48 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_50 [10] [10] [10] [10] [10] ;
unsigned long long int arr_53 [10] [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_54 [10] [10] [10] [10] ;
_Bool arr_55 [10] [10] [10] [10] [10] ;
unsigned long long int arr_60 [10] [10] [10] [10] ;
unsigned long long int arr_63 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_65 [10] [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)63551;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)50394;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 10309249220986923027ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 4466501664893190363ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)12750;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 37811756;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = 2130690334850423230LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -310985430;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)23663;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = (short)4929;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 16002114085428770476ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)69 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1331867952005265483ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 12401808740680077592ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5799095652419801623ULL : 13722356489040022407ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 3221829117812556617ULL : 7278340405168766006ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 13414374214988405484ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
