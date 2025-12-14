#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)200;
unsigned char var_2 = (unsigned char)45;
int var_3 = -1656350467;
short var_4 = (short)9265;
unsigned char var_5 = (unsigned char)194;
signed char var_6 = (signed char)-98;
short var_7 = (short)-30490;
unsigned char var_8 = (unsigned char)196;
short var_9 = (short)-6115;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-360;
long long int var_12 = 8819593801966092581LL;
unsigned long long int var_13 = 4255339157722657039ULL;
unsigned short var_14 = (unsigned short)29531;
unsigned long long int var_15 = 17503056503481096380ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)80;
short var_17 = (short)-4492;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)25449;
long long int var_20 = 8543171412117725083LL;
long long int var_21 = -5831000440735367405LL;
unsigned char var_22 = (unsigned char)30;
unsigned char var_23 = (unsigned char)5;
unsigned short var_24 = (unsigned short)15417;
short var_25 = (short)-18758;
unsigned long long int var_26 = 12616649235030661198ULL;
unsigned int var_27 = 3227646325U;
short var_28 = (short)-18572;
unsigned int var_29 = 4118672011U;
unsigned short var_30 = (unsigned short)3413;
unsigned char var_31 = (unsigned char)110;
short var_32 = (short)23116;
unsigned short var_33 = (unsigned short)19926;
unsigned char var_34 = (unsigned char)163;
unsigned char var_35 = (unsigned char)237;
unsigned short var_36 = (unsigned short)38906;
long long int var_37 = 1364242025802488758LL;
short var_38 = (short)6029;
unsigned int var_39 = 3176824913U;
unsigned int var_40 = 3109488865U;
unsigned int var_41 = 1517395324U;
unsigned short var_42 = (unsigned short)10392;
unsigned long long int var_43 = 401835780560720931ULL;
unsigned short var_44 = (unsigned short)1364;
unsigned int var_45 = 493259203U;
unsigned int arr_0 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
short arr_5 [23] ;
unsigned char arr_6 [23] [23] ;
signed char arr_9 [23] [23] [23] ;
unsigned char arr_10 [23] [23] [23] [23] [23] [23] ;
long long int arr_11 [23] [23] [23] [23] ;
int arr_14 [23] ;
unsigned short arr_19 [23] [23] [23] ;
int arr_23 [23] [23] [23] [23] ;
long long int arr_24 [23] [23] ;
signed char arr_26 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3804198639U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9679064287898256446ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)18031;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 4710108815796897540LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 479376005;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)35261;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1626001264 : 97478616;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = -3254235769382125442LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-68;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
