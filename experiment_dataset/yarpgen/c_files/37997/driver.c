#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 804609850516058248ULL;
unsigned short var_1 = (unsigned short)40851;
short var_2 = (short)31323;
unsigned long long int var_4 = 15547613190408942398ULL;
int var_6 = -1373534247;
long long int var_7 = -8589147492877725828LL;
unsigned int var_8 = 385992365U;
unsigned short var_9 = (unsigned short)61497;
unsigned long long int var_10 = 6829413486021165950ULL;
unsigned char var_16 = (unsigned char)2;
unsigned int var_17 = 1086424366U;
long long int var_19 = 6010025140327258286LL;
int zero = 0;
unsigned long long int var_20 = 11016832334194053895ULL;
signed char var_21 = (signed char)-78;
int var_22 = 947080648;
unsigned long long int var_23 = 14927686986656663026ULL;
long long int var_24 = -2897794461426239680LL;
unsigned char var_25 = (unsigned char)150;
long long int var_26 = 7475719591100068286LL;
unsigned long long int var_27 = 557957804111487240ULL;
unsigned short var_28 = (unsigned short)62142;
unsigned long long int var_29 = 11009497308898368673ULL;
long long int var_30 = -559796153284381778LL;
unsigned char var_31 = (unsigned char)28;
unsigned int var_32 = 2931384886U;
long long int var_33 = -7496790744119650058LL;
int var_34 = -403250901;
unsigned int var_35 = 2680368553U;
unsigned long long int var_36 = 2309249269151884980ULL;
unsigned long long int var_37 = 8694840587403268927ULL;
long long int var_38 = -2620323143704790346LL;
signed char var_39 = (signed char)3;
unsigned char var_40 = (unsigned char)87;
unsigned short var_41 = (unsigned short)59260;
long long int var_42 = 6678833226607042704LL;
unsigned long long int var_43 = 2573445671310313147ULL;
short arr_1 [20] [20] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_9 [25] [25] ;
unsigned int arr_10 [25] [25] ;
unsigned short arr_11 [25] [25] ;
short arr_12 [25] [25] ;
unsigned long long int arr_13 [25] [25] ;
unsigned char arr_16 [25] [25] [25] ;
unsigned int arr_18 [25] ;
unsigned char arr_19 [25] ;
unsigned short arr_20 [25] [25] [25] ;
signed char arr_21 [25] [25] [25] [25] ;
unsigned short arr_22 [25] [25] [25] [25] ;
signed char arr_23 [25] [25] [25] [25] ;
unsigned char arr_24 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19912;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 15150977328841574704ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 868773549U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)22842;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11967 : (short)-2387;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 3544506488868282216ULL : 7783577522567222497ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 3541613318U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)11612;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)22752;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)172;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
