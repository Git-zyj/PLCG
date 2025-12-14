#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
int var_1 = -210576365;
unsigned int var_2 = 3303859613U;
signed char var_3 = (signed char)-60;
unsigned int var_4 = 3987846624U;
short var_6 = (short)-20543;
signed char var_8 = (signed char)-46;
signed char var_9 = (signed char)67;
signed char var_10 = (signed char)14;
short var_11 = (short)8124;
unsigned short var_12 = (unsigned short)24700;
unsigned short var_13 = (unsigned short)63046;
signed char var_15 = (signed char)101;
int var_16 = 1683826187;
int zero = 0;
short var_17 = (short)16497;
signed char var_18 = (signed char)-11;
short var_19 = (short)16472;
signed char var_20 = (signed char)84;
signed char var_21 = (signed char)-1;
signed char var_22 = (signed char)-64;
signed char var_23 = (signed char)-56;
unsigned long long int var_24 = 1712038796494455765ULL;
signed char var_25 = (signed char)-123;
signed char var_26 = (signed char)27;
signed char var_27 = (signed char)-15;
signed char var_28 = (signed char)17;
unsigned short var_29 = (unsigned short)9592;
unsigned short var_30 = (unsigned short)25506;
unsigned int var_31 = 1883042130U;
short var_32 = (short)-4473;
signed char var_33 = (signed char)-52;
short var_34 = (short)20957;
unsigned short var_35 = (unsigned short)45508;
signed char var_36 = (signed char)-2;
unsigned char var_37 = (unsigned char)236;
signed char var_38 = (signed char)114;
int var_39 = 1774640130;
unsigned short var_40 = (unsigned short)44853;
unsigned char var_41 = (unsigned char)167;
unsigned int var_42 = 2252161015U;
signed char var_43 = (signed char)-52;
short var_44 = (short)-778;
short var_45 = (short)-4485;
signed char arr_0 [22] ;
long long int arr_1 [22] ;
int arr_3 [22] [22] [22] ;
int arr_4 [22] [22] ;
signed char arr_7 [19] ;
signed char arr_32 [25] ;
short arr_34 [25] ;
int arr_47 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 5291080403668908706LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 725186257;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -58532287;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (short)-25781 : (short)-2509;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -312355840 : 1981721347;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
