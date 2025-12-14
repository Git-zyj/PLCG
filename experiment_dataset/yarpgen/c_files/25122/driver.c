#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45482;
unsigned short var_2 = (unsigned short)6531;
unsigned long long int var_3 = 7943294000430573089ULL;
unsigned char var_4 = (unsigned char)226;
unsigned short var_5 = (unsigned short)14140;
unsigned long long int var_6 = 12935046453298031299ULL;
unsigned char var_7 = (unsigned char)190;
unsigned short var_8 = (unsigned short)7089;
unsigned long long int var_10 = 2520455220508364536ULL;
unsigned char var_11 = (unsigned char)118;
unsigned char var_12 = (unsigned char)68;
unsigned char var_13 = (unsigned char)95;
int zero = 0;
unsigned char var_14 = (unsigned char)187;
unsigned short var_15 = (unsigned short)17098;
unsigned char var_16 = (unsigned char)44;
unsigned long long int var_17 = 950633338741443720ULL;
unsigned short var_18 = (unsigned short)22666;
unsigned short var_19 = (unsigned short)50621;
unsigned long long int var_20 = 15648017524681271502ULL;
unsigned char var_21 = (unsigned char)210;
unsigned short var_22 = (unsigned short)53033;
unsigned char var_23 = (unsigned char)31;
unsigned char var_24 = (unsigned char)51;
unsigned char var_25 = (unsigned char)182;
unsigned long long int var_26 = 10194031602402546668ULL;
unsigned short var_27 = (unsigned short)898;
unsigned short var_28 = (unsigned short)52455;
unsigned short var_29 = (unsigned short)19095;
unsigned short var_30 = (unsigned short)63655;
unsigned short var_31 = (unsigned short)49733;
unsigned char var_32 = (unsigned char)247;
unsigned char var_33 = (unsigned char)139;
unsigned char var_34 = (unsigned char)28;
unsigned char var_35 = (unsigned char)127;
unsigned char var_36 = (unsigned char)148;
unsigned long long int var_37 = 298611865519760626ULL;
unsigned long long int var_38 = 12950577683019876284ULL;
unsigned char var_39 = (unsigned char)156;
unsigned char var_40 = (unsigned char)126;
unsigned char var_41 = (unsigned char)200;
unsigned char var_42 = (unsigned char)45;
unsigned short var_43 = (unsigned short)25710;
unsigned char var_44 = (unsigned char)197;
unsigned char var_45 = (unsigned char)184;
unsigned short var_46 = (unsigned short)61351;
unsigned long long int var_47 = 1690515396111068020ULL;
unsigned char var_48 = (unsigned char)131;
unsigned char var_49 = (unsigned char)244;
unsigned char var_50 = (unsigned char)247;
unsigned short var_51 = (unsigned short)24242;
unsigned long long int var_52 = 2687394456446497507ULL;
unsigned char var_53 = (unsigned char)140;
unsigned short var_54 = (unsigned short)24635;
unsigned short var_55 = (unsigned short)21589;
unsigned char var_56 = (unsigned char)146;
unsigned char var_57 = (unsigned char)92;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned char arr_2 [11] [11] ;
unsigned short arr_3 [11] [11] ;
unsigned char arr_5 [11] ;
unsigned long long int arr_6 [11] ;
unsigned char arr_8 [11] ;
unsigned long long int arr_9 [11] [11] [11] ;
unsigned char arr_11 [11] ;
unsigned long long int arr_12 [11] ;
unsigned short arr_14 [11] ;
unsigned short arr_15 [11] [11] [11] [11] ;
unsigned short arr_16 [11] [11] [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] [11] ;
unsigned short arr_18 [11] [11] [11] [11] [11] ;
unsigned char arr_24 [11] [11] [11] [11] [11] ;
unsigned long long int arr_28 [11] [11] [11] [11] ;
unsigned short arr_35 [11] [11] [11] ;
unsigned char arr_36 [11] [11] [11] ;
unsigned char arr_40 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 8499749551625231141ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 17760337918992993484ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)42384;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 10715880216007631475ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 16896887809320724006ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 4025550564476093314ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned short)62988;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)26901;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7664;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 17586635078053107640ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)5769;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 2658111688831485779ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned short)21811;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)122;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
