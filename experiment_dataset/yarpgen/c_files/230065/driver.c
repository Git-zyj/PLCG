#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13077318994750710273ULL;
signed char var_6 = (signed char)-57;
signed char var_10 = (signed char)93;
unsigned char var_11 = (unsigned char)47;
unsigned int var_12 = 2027169247U;
int var_13 = 439357900;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 1745430975564662001ULL;
signed char var_18 = (signed char)56;
short var_19 = (short)13022;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)108;
signed char var_22 = (signed char)-80;
unsigned int var_23 = 3317533402U;
unsigned long long int var_24 = 13861211383550027186ULL;
unsigned short var_25 = (unsigned short)53541;
int var_26 = 1554059301;
long long int var_27 = 2989071290412380334LL;
signed char var_28 = (signed char)-10;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)-95;
unsigned int var_31 = 2212497411U;
signed char var_32 = (signed char)56;
unsigned char var_33 = (unsigned char)170;
int var_34 = -1041649987;
int var_35 = -2135372907;
unsigned int var_36 = 3611699555U;
unsigned int var_37 = 647320079U;
unsigned long long int var_38 = 6824204364206723623ULL;
unsigned char var_39 = (unsigned char)92;
unsigned char var_40 = (unsigned char)51;
unsigned int var_41 = 2648693075U;
unsigned int var_42 = 2708010276U;
unsigned int var_43 = 1323096384U;
unsigned long long int var_44 = 14172379140085844928ULL;
signed char var_45 = (signed char)-99;
signed char var_46 = (signed char)-81;
_Bool var_47 = (_Bool)1;
unsigned int var_48 = 185588694U;
signed char var_49 = (signed char)-59;
unsigned int var_50 = 2181426453U;
long long int var_51 = 1449121718011701141LL;
short var_52 = (short)-25854;
signed char var_53 = (signed char)87;
int var_54 = 633531273;
unsigned long long int arr_1 [11] [11] ;
short arr_4 [11] ;
signed char arr_5 [12] [12] ;
unsigned long long int arr_7 [12] [12] ;
long long int arr_11 [12] [12] [12] [12] ;
unsigned int arr_12 [12] [12] [12] [12] [12] ;
int arr_13 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] [12] ;
signed char arr_15 [12] [12] [12] [12] [12] [12] ;
long long int arr_17 [12] [12] [12] [12] ;
long long int arr_20 [12] [12] ;
short arr_21 [12] [12] ;
int arr_22 [12] [12] [12] [12] [12] ;
unsigned long long int arr_24 [12] [12] [12] [12] [12] ;
long long int arr_31 [12] [12] ;
long long int arr_33 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 10848663367863491805ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-30119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4233657206949708409ULL : 5877197190981477304ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2501809335954343281LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2228381950U : 2839076255U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -1659640847 : -1475513629;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37716;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)-40 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2507313398480699934LL : 137424520423910908LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 6918962892954480909LL : 8562638139156912416LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (short)19352;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = -1523055845;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 515037507268874962ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = -4857703768250541585LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = -4992903098329721283LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
