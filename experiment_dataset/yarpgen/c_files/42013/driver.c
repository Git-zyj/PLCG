#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
signed char var_2 = (signed char)(-127 - 1);
signed char var_3 = (signed char)67;
signed char var_4 = (signed char)90;
signed char var_6 = (signed char)-67;
signed char var_7 = (signed char)119;
signed char var_9 = (signed char)47;
signed char var_12 = (signed char)99;
signed char var_13 = (signed char)44;
signed char var_14 = (signed char)51;
signed char var_15 = (signed char)94;
signed char var_16 = (signed char)65;
signed char var_17 = (signed char)-82;
signed char var_18 = (signed char)-50;
signed char var_19 = (signed char)-82;
int zero = 0;
signed char var_20 = (signed char)-16;
signed char var_21 = (signed char)-1;
signed char var_22 = (signed char)-5;
signed char var_23 = (signed char)73;
signed char var_24 = (signed char)28;
signed char var_25 = (signed char)90;
signed char var_26 = (signed char)85;
signed char var_27 = (signed char)-2;
signed char var_28 = (signed char)-75;
signed char var_29 = (signed char)69;
signed char var_30 = (signed char)-56;
signed char var_31 = (signed char)74;
signed char var_32 = (signed char)-22;
signed char var_33 = (signed char)24;
signed char var_34 = (signed char)-76;
signed char var_35 = (signed char)88;
signed char var_36 = (signed char)76;
signed char var_37 = (signed char)-51;
signed char var_38 = (signed char)8;
signed char var_39 = (signed char)16;
signed char var_40 = (signed char)102;
signed char var_41 = (signed char)-42;
signed char arr_1 [15] [15] ;
signed char arr_2 [15] ;
signed char arr_3 [15] [15] ;
signed char arr_5 [15] [15] ;
signed char arr_6 [15] [15] [15] ;
signed char arr_7 [15] [15] [15] [15] ;
signed char arr_8 [15] [15] ;
signed char arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)97 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-100 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)35;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
