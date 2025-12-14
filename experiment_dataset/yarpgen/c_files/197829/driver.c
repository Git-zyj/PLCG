#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1301738551;
int var_7 = 300256244;
int var_11 = -2146322797;
unsigned char var_14 = (unsigned char)113;
unsigned char var_16 = (unsigned char)246;
unsigned int var_18 = 3168066132U;
int zero = 0;
int var_19 = -1529285998;
unsigned int var_20 = 151690070U;
unsigned int var_21 = 2262193U;
int var_22 = 1770186741;
unsigned char var_23 = (unsigned char)236;
int var_24 = 2131794709;
int var_25 = 2119116559;
unsigned int var_26 = 3922616029U;
int var_27 = -1465871259;
unsigned int var_28 = 3149694670U;
unsigned int var_29 = 1302053246U;
int var_30 = -1880264257;
unsigned long long int var_31 = 2856972918196743142ULL;
int var_32 = 395834183;
int var_33 = -1638326516;
int var_34 = 840741968;
int var_35 = 1333959505;
unsigned long long int var_36 = 2704558688266482169ULL;
int var_37 = 204204463;
unsigned int var_38 = 3864719092U;
int var_39 = 2126009072;
int var_40 = 538365401;
unsigned int var_41 = 2383959361U;
unsigned int var_42 = 896876376U;
int var_43 = 1672777134;
int var_44 = 1288485273;
int var_45 = 1775059272;
int var_46 = 644108198;
unsigned char var_47 = (unsigned char)26;
int var_48 = -1487304660;
unsigned long long int var_49 = 1845610691731862341ULL;
int var_50 = -303197491;
int var_51 = 1819850133;
int var_52 = -1795668156;
unsigned int var_53 = 2404867815U;
int var_54 = 1065074743;
unsigned char var_55 = (unsigned char)147;
int var_56 = 1460074503;
int var_57 = -1157954059;
int var_58 = -793006058;
unsigned int var_59 = 594893491U;
int var_60 = -1740196921;
unsigned char var_61 = (unsigned char)44;
int var_62 = -810191758;
unsigned int arr_0 [13] [13] ;
int arr_1 [13] ;
int arr_2 [21] ;
unsigned int arr_3 [21] ;
unsigned long long int arr_4 [21] [21] ;
int arr_5 [21] ;
unsigned int arr_6 [21] [21] [21] ;
unsigned int arr_7 [21] ;
unsigned long long int arr_8 [21] [21] ;
unsigned int arr_9 [21] [21] [21] ;
int arr_10 [21] ;
unsigned int arr_11 [21] [21] ;
unsigned char arr_12 [21] ;
unsigned int arr_14 [21] [21] ;
int arr_15 [21] [21] [21] ;
int arr_16 [21] [21] [21] [21] ;
unsigned int arr_17 [21] [21] [21] ;
unsigned int arr_18 [21] [21] [21] [21] [21] [21] ;
int arr_19 [21] [21] ;
unsigned char arr_24 [21] [21] [21] ;
int arr_34 [25] ;
int arr_35 [25] ;
int arr_36 [25] ;
int arr_37 [25] [25] ;
int arr_38 [25] [25] [25] ;
unsigned int arr_43 [25] [25] [25] [25] ;
unsigned int arr_44 [25] ;
int arr_47 [25] ;
unsigned long long int arr_51 [25] [25] [25] ;
int arr_53 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 2581023076U : 1984276371U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1523159359;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1602037731;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2618453186U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 39908533168407453ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 232806388;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2794327704U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1058159562U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 15488365092317065498ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2006066134U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 1619766180;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 551157234U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 2305772577U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1987892093;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -1411010032;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 3384534405U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 3952573128U : 2295392099U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = -1506753282;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = -300805197;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 1131217233;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = 644812335;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_37 [i_0] [i_1] = -2135715965;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -368808107 : -871980747;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2051118601U : 2778573508U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = 316599617U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_47 [i_0] = 495088401;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9765262154878458201ULL : 10120491181508514239ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = -2044983069;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
