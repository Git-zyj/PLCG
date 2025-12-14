#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32604;
long long int var_2 = 6443114916184390728LL;
int var_4 = -1557174650;
unsigned short var_5 = (unsigned short)3377;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 17780960214240680777ULL;
int var_10 = -491616447;
unsigned short var_15 = (unsigned short)47685;
long long int var_16 = 8369430300860440052LL;
unsigned short var_17 = (unsigned short)37717;
int var_18 = 1916786181;
unsigned short var_19 = (unsigned short)60561;
int zero = 0;
short var_20 = (short)24519;
long long int var_21 = -5299275818783918145LL;
short var_22 = (short)5619;
int var_23 = -981106261;
int var_24 = 1787583678;
unsigned char var_25 = (unsigned char)135;
unsigned short var_26 = (unsigned short)33649;
int var_27 = 2136633471;
unsigned short var_28 = (unsigned short)49245;
int var_29 = 1824842387;
unsigned short var_30 = (unsigned short)56838;
unsigned short var_31 = (unsigned short)28417;
unsigned short var_32 = (unsigned short)33664;
unsigned short var_33 = (unsigned short)56202;
unsigned char var_34 = (unsigned char)146;
long long int var_35 = 4456123630602717934LL;
_Bool var_36 = (_Bool)1;
unsigned long long int var_37 = 4861099888182460419ULL;
unsigned char var_38 = (unsigned char)73;
unsigned char var_39 = (unsigned char)161;
int var_40 = -1835191741;
int var_41 = -1293534927;
int var_42 = 826522359;
long long int var_43 = -7826681199443088664LL;
int var_44 = -1037377855;
unsigned short var_45 = (unsigned short)57991;
unsigned short var_46 = (unsigned short)62287;
unsigned long long int var_47 = 8009987437059975060ULL;
_Bool var_48 = (_Bool)1;
unsigned short var_49 = (unsigned short)40858;
int var_50 = -743127742;
short var_51 = (short)9256;
unsigned short var_52 = (unsigned short)55106;
long long int var_53 = 2748030148856089255LL;
long long int var_54 = 3889363800780636538LL;
_Bool var_55 = (_Bool)0;
unsigned char var_56 = (unsigned char)174;
unsigned short var_57 = (unsigned short)6190;
unsigned short var_58 = (unsigned short)64060;
unsigned long long int var_59 = 7418339053630802068ULL;
unsigned char arr_6 [19] ;
long long int arr_7 [19] [19] [19] [19] ;
short arr_10 [19] [19] [19] [19] ;
unsigned short arr_13 [19] [19] [19] [19] [19] ;
unsigned char arr_16 [19] [19] [19] [19] [19] [19] ;
int arr_21 [19] [19] [19] [19] [19] ;
int arr_30 [19] [19] [19] [19] ;
unsigned char arr_31 [19] ;
int arr_35 [19] [19] ;
unsigned long long int arr_37 [19] [19] ;
long long int arr_41 [19] [19] [19] ;
short arr_47 [19] [19] [19] [19] [19] ;
unsigned short arr_62 [19] [19] [19] ;
unsigned char arr_66 [24] [24] ;
long long int arr_76 [24] [24] [24] ;
long long int arr_77 [24] [24] [24] [24] [24] ;
unsigned short arr_14 [19] [19] [19] [19] [19] [19] ;
long long int arr_22 [19] [19] [19] [19] [19] ;
int arr_54 [19] [19] ;
unsigned short arr_81 [24] [24] [24] [24] [24] ;
int arr_90 [10] [10] ;
unsigned char arr_91 [10] ;
int arr_94 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 8274063269726887964LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-24648;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)18101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = -2122890377;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 455260938;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = -1647519133;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_37 [i_0] [i_1] = 10132187322834402693ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = -8104175248259165395LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)22426;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (unsigned short)22826;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_66 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = 8584940027014438972LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = -8305134427044198802LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)40887;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 547156178712126734LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_54 [i_0] [i_1] = 100152768;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)6420;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_90 [i_0] [i_1] = -804104677;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_91 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_94 [i_0] = 1367334514;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_90 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_94 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
