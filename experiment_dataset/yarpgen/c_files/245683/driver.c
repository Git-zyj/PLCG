#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
signed char var_1 = (signed char)81;
signed char var_2 = (signed char)-58;
signed char var_3 = (signed char)-126;
signed char var_4 = (signed char)-94;
signed char var_5 = (signed char)-43;
signed char var_6 = (signed char)-47;
signed char var_7 = (signed char)121;
signed char var_8 = (signed char)60;
signed char var_9 = (signed char)1;
signed char var_10 = (signed char)-61;
signed char var_11 = (signed char)-36;
signed char var_12 = (signed char)8;
int zero = 0;
signed char var_13 = (signed char)68;
signed char var_14 = (signed char)75;
signed char var_15 = (signed char)-51;
signed char var_16 = (signed char)-78;
signed char var_17 = (signed char)46;
signed char var_18 = (signed char)72;
signed char var_19 = (signed char)53;
signed char var_20 = (signed char)-2;
signed char var_21 = (signed char)79;
signed char var_22 = (signed char)-7;
signed char var_23 = (signed char)-43;
signed char var_24 = (signed char)-15;
signed char var_25 = (signed char)-25;
signed char var_26 = (signed char)63;
signed char var_27 = (signed char)31;
signed char var_28 = (signed char)92;
signed char var_29 = (signed char)-102;
signed char var_30 = (signed char)120;
signed char var_31 = (signed char)42;
signed char var_32 = (signed char)-81;
signed char var_33 = (signed char)117;
signed char var_34 = (signed char)30;
signed char var_35 = (signed char)-42;
signed char var_36 = (signed char)89;
signed char var_37 = (signed char)-70;
signed char var_38 = (signed char)-126;
signed char var_39 = (signed char)127;
signed char var_40 = (signed char)-112;
signed char var_41 = (signed char)11;
signed char arr_0 [22] [22] ;
signed char arr_1 [22] ;
signed char arr_3 [22] ;
signed char arr_4 [22] [22] [22] ;
signed char arr_8 [22] [22] ;
signed char arr_10 [22] [22] [22] [22] [22] ;
signed char arr_11 [22] ;
signed char arr_13 [22] [22] [22] [22] [22] [22] ;
signed char arr_14 [22] [22] [22] [22] [22] ;
signed char arr_15 [22] ;
signed char arr_16 [22] [22] ;
signed char arr_22 [22] [22] [22] [22] ;
signed char arr_2 [22] ;
signed char arr_12 [22] [22] [22] [22] [22] ;
signed char arr_19 [22] ;
signed char arr_20 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)106 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-119 : (signed char)-91;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
