#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8417;
unsigned char var_1 = (unsigned char)97;
unsigned char var_2 = (unsigned char)159;
unsigned short var_3 = (unsigned short)9920;
unsigned char var_4 = (unsigned char)239;
unsigned char var_5 = (unsigned char)44;
unsigned short var_6 = (unsigned short)47561;
unsigned short var_7 = (unsigned short)849;
unsigned char var_9 = (unsigned char)34;
unsigned short var_10 = (unsigned short)34871;
unsigned char var_11 = (unsigned char)155;
unsigned short var_13 = (unsigned short)2968;
unsigned short var_14 = (unsigned short)2843;
unsigned short var_15 = (unsigned short)7919;
unsigned short var_16 = (unsigned short)29708;
unsigned short var_17 = (unsigned short)51623;
unsigned short var_18 = (unsigned short)5176;
int zero = 0;
unsigned char var_19 = (unsigned char)25;
unsigned char var_20 = (unsigned char)47;
unsigned char var_21 = (unsigned char)78;
unsigned short var_22 = (unsigned short)33800;
unsigned char var_23 = (unsigned char)82;
unsigned short var_24 = (unsigned short)33744;
unsigned short var_25 = (unsigned short)13935;
unsigned short var_26 = (unsigned short)2750;
unsigned short var_27 = (unsigned short)50372;
unsigned char var_28 = (unsigned char)198;
unsigned char var_29 = (unsigned char)95;
unsigned short var_30 = (unsigned short)54675;
unsigned char var_31 = (unsigned char)128;
unsigned short var_32 = (unsigned short)25356;
unsigned char var_33 = (unsigned char)233;
unsigned char var_34 = (unsigned char)125;
unsigned char var_35 = (unsigned char)133;
unsigned short var_36 = (unsigned short)6262;
unsigned short arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned short arr_6 [22] ;
unsigned char arr_7 [22] [22] ;
unsigned short arr_8 [22] ;
unsigned char arr_9 [22] [22] ;
unsigned char arr_11 [22] [22] [22] ;
unsigned char arr_12 [22] [22] [22] [22] ;
unsigned short arr_14 [22] [22] [22] ;
unsigned char arr_15 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_21 [22] [22] [22] ;
unsigned short arr_23 [22] [22] [22] ;
unsigned char arr_28 [22] ;
unsigned short arr_3 [21] [21] ;
unsigned char arr_4 [21] ;
unsigned short arr_18 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_19 [22] [22] ;
unsigned short arr_34 [22] [22] [22] ;
unsigned short arr_35 [22] [22] [22] [22] [22] ;
unsigned short arr_36 [22] ;
unsigned short arr_37 [22] [22] ;
unsigned short arr_40 [22] ;
unsigned short arr_44 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45662;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)29167;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36075;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53665 : (unsigned short)51616;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)52670;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)197 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)37076 : (unsigned short)63882;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)9660 : (unsigned short)48421;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)25664 : (unsigned short)45411;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)27308;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned short)35268 : (unsigned short)9812;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)28710 : (unsigned short)51211;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)27889 : (unsigned short)29077;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)47716 : (unsigned short)58683;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29231 : (unsigned short)3087;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)26853 : (unsigned short)37077;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13511 : (unsigned short)30787;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)46440 : (unsigned short)15115;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
