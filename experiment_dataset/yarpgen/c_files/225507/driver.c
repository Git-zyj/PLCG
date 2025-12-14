#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10746;
unsigned int var_1 = 3294626536U;
signed char var_2 = (signed char)74;
int var_3 = 1350740644;
int var_4 = 614913537;
unsigned int var_5 = 1741174702U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)39623;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
short var_10 = (short)13155;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 463077754;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6326897700134869521ULL;
int var_15 = 314000299;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)15272;
_Bool var_19 = (_Bool)0;
int var_20 = -1554853682;
signed char var_21 = (signed char)-34;
unsigned char var_22 = (unsigned char)136;
long long int var_23 = 7422353377004020193LL;
short var_24 = (short)26646;
unsigned short var_25 = (unsigned short)3747;
_Bool var_26 = (_Bool)1;
long long int var_27 = 3182355128098907622LL;
unsigned short var_28 = (unsigned short)54803;
short var_29 = (short)4131;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)11040;
unsigned int var_32 = 1122729664U;
signed char var_33 = (signed char)88;
unsigned short var_34 = (unsigned short)1219;
signed char var_35 = (signed char)-74;
unsigned short var_36 = (unsigned short)5813;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)9;
signed char var_39 = (signed char)-84;
_Bool var_40 = (_Bool)0;
_Bool var_41 = (_Bool)0;
unsigned long long int var_42 = 2757482985588159252ULL;
unsigned long long int var_43 = 1804755119329158264ULL;
_Bool var_44 = (_Bool)1;
unsigned long long int var_45 = 3941756423720705608ULL;
unsigned int var_46 = 3850573841U;
_Bool var_47 = (_Bool)0;
int var_48 = -849444226;
signed char var_49 = (signed char)94;
_Bool var_50 = (_Bool)0;
unsigned long long int var_51 = 8719699968007650827ULL;
_Bool var_52 = (_Bool)1;
unsigned short var_53 = (unsigned short)25020;
int var_54 = 622134788;
unsigned char var_55 = (unsigned char)20;
long long int var_56 = -5810348241827992744LL;
unsigned long long int var_57 = 15847357011284947948ULL;
int var_58 = -1295557170;
_Bool var_59 = (_Bool)0;
short var_60 = (short)-23921;
_Bool arr_0 [14] ;
long long int arr_1 [14] [14] ;
unsigned char arr_2 [14] [14] ;
_Bool arr_4 [14] [14] [14] [14] ;
unsigned long long int arr_5 [14] ;
unsigned short arr_6 [14] [14] [14] ;
int arr_7 [14] [14] ;
short arr_8 [14] ;
unsigned short arr_9 [14] [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] [14] [14] [14] ;
unsigned int arr_11 [14] ;
unsigned long long int arr_12 [14] [14] ;
unsigned char arr_13 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_14 [14] [14] [14] [14] ;
_Bool arr_17 [14] ;
short arr_19 [14] ;
unsigned long long int arr_21 [14] [14] ;
signed char arr_22 [14] ;
signed char arr_23 [14] [14] [14] [14] ;
_Bool arr_28 [14] ;
_Bool arr_30 [14] ;
short arr_31 [14] [14] [14] [14] ;
unsigned char arr_32 [14] ;
unsigned char arr_34 [14] [14] ;
short arr_36 [14] ;
int arr_37 [14] ;
_Bool arr_40 [14] ;
signed char arr_41 [14] ;
long long int arr_43 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -7045700761087734758LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1246599566132974118ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)9046;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1898464069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-32045 : (short)1066;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)53424 : (unsigned short)18831;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 4094635363U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 2275817948078717696ULL : 10706280670783272783ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (short)-30127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = 12041626383252746048ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)-17003;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = (short)15527;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = 1691334581;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_41 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = -750915969260980639LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
