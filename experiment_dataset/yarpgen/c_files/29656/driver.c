#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1304254231U;
short var_1 = (short)3061;
long long int var_5 = -7626002446986335240LL;
_Bool var_8 = (_Bool)1;
long long int var_12 = 6943615817417142103LL;
short var_17 = (short)-14614;
unsigned int var_18 = 973011243U;
int zero = 0;
unsigned long long int var_19 = 9892467883923364522ULL;
signed char var_20 = (signed char)39;
unsigned short var_21 = (unsigned short)29096;
unsigned int var_22 = 902836501U;
unsigned int var_23 = 2684327648U;
long long int var_24 = -1914323254222889678LL;
unsigned char var_25 = (unsigned char)100;
unsigned short var_26 = (unsigned short)31709;
short var_27 = (short)15;
unsigned long long int var_28 = 13454994576061263883ULL;
unsigned short var_29 = (unsigned short)27933;
signed char var_30 = (signed char)-20;
unsigned long long int var_31 = 3797009889664780107ULL;
unsigned long long int var_32 = 2491697216099584919ULL;
long long int var_33 = -6405468011332907656LL;
unsigned long long int var_34 = 3298669191613175549ULL;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)28342;
unsigned short var_37 = (unsigned short)3098;
unsigned char var_38 = (unsigned char)170;
_Bool arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] ;
short arr_3 [17] ;
_Bool arr_4 [17] [17] [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
unsigned short arr_6 [17] ;
unsigned short arr_7 [16] [16] ;
signed char arr_8 [16] [16] ;
unsigned int arr_10 [12] ;
unsigned char arr_13 [22] ;
unsigned short arr_18 [22] [22] [22] ;
unsigned short arr_19 [22] ;
unsigned short arr_22 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 10179212237501074143ULL : 11986467163673947185ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-18978;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8024018866472608494ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)5228;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)56130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 1646936605U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)5407;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned short)46481;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)14459;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
