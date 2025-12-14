#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15148;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)47036;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)9519;
long long int var_5 = 423048145216946313LL;
unsigned short var_6 = (unsigned short)41028;
unsigned short var_7 = (unsigned short)27088;
short var_8 = (short)12778;
short var_9 = (short)-18303;
unsigned long long int var_10 = 11713975505801963572ULL;
unsigned long long int var_11 = 17691479150408654057ULL;
unsigned short var_12 = (unsigned short)24813;
int zero = 0;
unsigned long long int var_13 = 17589005631454601622ULL;
unsigned short var_14 = (unsigned short)11175;
unsigned int var_15 = 4009534770U;
unsigned long long int var_16 = 17657618645653181591ULL;
long long int var_17 = 2810193819152957796LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4147606535U;
unsigned short var_21 = (unsigned short)44497;
unsigned int var_22 = 4033930062U;
unsigned int var_23 = 566533873U;
unsigned short var_24 = (unsigned short)59705;
long long int var_25 = 1694962250798836809LL;
unsigned short var_26 = (unsigned short)10544;
unsigned long long int var_27 = 4370208816147282312ULL;
unsigned int var_28 = 1870728516U;
short var_29 = (short)-31959;
_Bool var_30 = (_Bool)0;
short var_31 = (short)18591;
unsigned long long int var_32 = 7628691824634966899ULL;
unsigned short var_33 = (unsigned short)28975;
unsigned int var_34 = 365350737U;
unsigned int var_35 = 625035912U;
long long int var_36 = -1621469645696341735LL;
long long int var_37 = -84412281929858519LL;
unsigned int var_38 = 3706393020U;
unsigned short var_39 = (unsigned short)54849;
unsigned int var_40 = 4028171252U;
_Bool var_41 = (_Bool)0;
unsigned long long int var_42 = 5039588518038010659ULL;
unsigned short var_43 = (unsigned short)1646;
unsigned long long int var_44 = 15025250080784244930ULL;
unsigned short var_45 = (unsigned short)12944;
long long int var_46 = -6906747171223293730LL;
unsigned short var_47 = (unsigned short)35535;
unsigned long long int var_48 = 13197928856960222768ULL;
unsigned int var_49 = 2313871054U;
short var_50 = (short)9315;
unsigned short var_51 = (unsigned short)40440;
unsigned short var_52 = (unsigned short)28044;
long long int var_53 = 137019344465123027LL;
unsigned short var_54 = (unsigned short)37871;
unsigned short var_55 = (unsigned short)36772;
short var_56 = (short)-5875;
unsigned short var_57 = (unsigned short)52764;
unsigned long long int var_58 = 13690533521152225432ULL;
unsigned long long int var_59 = 16554833897602320909ULL;
long long int var_60 = -2997949919139909345LL;
unsigned long long int arr_0 [24] [24] ;
unsigned short arr_1 [24] [24] ;
long long int arr_2 [24] [24] ;
_Bool arr_3 [24] [24] ;
short arr_5 [15] ;
_Bool arr_7 [15] ;
_Bool arr_9 [15] [15] [15] ;
unsigned short arr_10 [15] [15] ;
short arr_12 [15] ;
unsigned short arr_15 [17] ;
unsigned short arr_20 [17] [17] ;
unsigned short arr_24 [25] ;
short arr_25 [25] [25] [25] ;
short arr_26 [25] [25] ;
unsigned short arr_27 [25] ;
unsigned short arr_28 [21] ;
unsigned int arr_29 [21] ;
unsigned long long int arr_30 [21] [21] ;
unsigned long long int arr_31 [21] ;
long long int arr_32 [21] ;
unsigned short arr_33 [21] [21] [21] [21] ;
unsigned short arr_38 [21] [21] [21] ;
short arr_39 [21] [21] [21] ;
long long int arr_41 [21] [21] [21] [21] ;
_Bool arr_42 [21] [21] [21] ;
unsigned short arr_43 [21] [21] [21] [21] [21] [21] [21] ;
short arr_44 [21] [21] [21] [21] [21] ;
unsigned long long int arr_45 [21] [21] [21] [21] [21] ;
unsigned int arr_46 [21] [21] ;
unsigned short arr_49 [21] ;
unsigned short arr_53 [21] ;
long long int arr_56 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3515167832632416120ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 4303613793585934286LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-18909;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)64241;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (short)-18642;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned short)28503;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)49602;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (unsigned short)52081;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29656 : (short)16369;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-1134 : (short)-9367;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (unsigned short)39327;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (unsigned short)13507;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = 3274458181U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = 7939205875403983640ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = 6765219180246555979ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = -7208106149369908202LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned short)13688;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)28642;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-23745 : (short)-21557;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -9082365148444681517LL : -4096783323869949435LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)2445;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-14304 : (short)1620;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = 16267000321705611366ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? 3882202652U : 2514401276U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_49 [i_0] = (unsigned short)13836;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_53 [i_0] = (unsigned short)1648;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5798107783285313656LL : 621728030693553005LL;
}

void checksum() {
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
