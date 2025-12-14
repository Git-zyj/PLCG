#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5482469307166419769ULL;
int var_1 = 2043801323;
unsigned int var_2 = 3057280092U;
unsigned char var_3 = (unsigned char)76;
short var_4 = (short)7191;
int var_5 = 1659718829;
unsigned int var_6 = 365630915U;
unsigned int var_7 = 112306020U;
int var_8 = 727789214;
unsigned char var_9 = (unsigned char)152;
unsigned char var_10 = (unsigned char)225;
int var_11 = -501818112;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)86;
int var_14 = 686688079;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1714473443U;
int zero = 0;
signed char var_17 = (signed char)88;
unsigned long long int var_18 = 12807239911936167717ULL;
unsigned long long int var_19 = 13780952175975433499ULL;
short var_20 = (short)-4344;
int var_21 = 1710775342;
long long int var_22 = 4902691625732288196LL;
signed char var_23 = (signed char)79;
int var_24 = -1452712994;
signed char var_25 = (signed char)-26;
unsigned int var_26 = 3342216488U;
int var_27 = 1343244147;
unsigned char var_28 = (unsigned char)220;
int var_29 = -1343675639;
signed char var_30 = (signed char)10;
_Bool var_31 = (_Bool)1;
short var_32 = (short)30655;
unsigned long long int var_33 = 7650686032327999186ULL;
int var_34 = 88009865;
unsigned long long int var_35 = 14179528316304678294ULL;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)230;
unsigned char var_38 = (unsigned char)239;
long long int var_39 = 805227298612612521LL;
int var_40 = -1074003160;
unsigned char var_41 = (unsigned char)9;
unsigned long long int var_42 = 8353252115283054402ULL;
_Bool var_43 = (_Bool)1;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)34;
signed char var_46 = (signed char)31;
unsigned char var_47 = (unsigned char)13;
unsigned long long int var_48 = 12867620360267153445ULL;
short var_49 = (short)-8509;
unsigned int var_50 = 3229257717U;
_Bool var_51 = (_Bool)1;
signed char var_52 = (signed char)-116;
unsigned int var_53 = 2362062004U;
signed char var_54 = (signed char)32;
short var_55 = (short)9146;
unsigned int arr_0 [17] ;
_Bool arr_1 [17] ;
signed char arr_5 [17] [17] [17] [17] ;
unsigned char arr_6 [17] [17] [17] [17] ;
signed char arr_7 [17] [17] [17] [17] ;
unsigned char arr_9 [17] [17] [17] [17] ;
unsigned char arr_13 [17] [17] [17] [17] [17] ;
unsigned long long int arr_14 [17] [17] [17] [17] [17] ;
long long int arr_15 [17] [17] [17] [17] [17] ;
_Bool arr_21 [17] [17] [17] [17] ;
unsigned int arr_30 [17] [17] [17] [17] [17] ;
unsigned char arr_34 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1848641948U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 558731708719887901ULL : 11221302993997336210ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 1252082646158625607LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 2112731962U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (unsigned char)235;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
