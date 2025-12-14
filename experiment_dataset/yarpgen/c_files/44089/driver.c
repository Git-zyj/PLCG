#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3715121144U;
long long int var_2 = -4885640953585867110LL;
unsigned char var_4 = (unsigned char)197;
unsigned char var_5 = (unsigned char)189;
unsigned int var_6 = 1397158268U;
long long int var_7 = 4581243051783840091LL;
signed char var_8 = (signed char)-58;
long long int var_9 = 4864456084844863781LL;
short var_11 = (short)-15375;
signed char var_12 = (signed char)59;
unsigned char var_13 = (unsigned char)223;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9334043185980696241ULL;
unsigned int var_17 = 379876453U;
int zero = 0;
long long int var_18 = -4096642607185095729LL;
short var_19 = (short)-21397;
unsigned short var_20 = (unsigned short)50975;
unsigned int var_21 = 1017586496U;
unsigned int var_22 = 546371092U;
unsigned long long int var_23 = 15819111706487932019ULL;
unsigned int var_24 = 3315512131U;
short var_25 = (short)-18575;
unsigned int var_26 = 4002211856U;
signed char var_27 = (signed char)-109;
int var_28 = -1251400700;
unsigned long long int var_29 = 14503704256610548843ULL;
short var_30 = (short)-25610;
unsigned char var_31 = (unsigned char)73;
unsigned short var_32 = (unsigned short)5085;
int var_33 = 56231192;
unsigned int var_34 = 1513152320U;
int var_35 = -1860184481;
long long int var_36 = -803725720428852619LL;
short var_37 = (short)-26905;
short var_38 = (short)32287;
unsigned long long int var_39 = 13034946765632803073ULL;
unsigned int arr_1 [19] ;
unsigned char arr_4 [21] ;
unsigned char arr_6 [21] ;
int arr_7 [21] [21] [21] ;
unsigned char arr_9 [21] [21] [21] [21] ;
short arr_12 [21] [21] [21] [21] [21] ;
short arr_14 [13] ;
int arr_15 [13] ;
int arr_17 [13] [13] ;
long long int arr_20 [13] [13] [13] ;
unsigned long long int arr_34 [13] [13] [13] ;
unsigned int arr_2 [19] [19] ;
short arr_5 [21] ;
unsigned long long int arr_24 [13] [13] [13] [13] ;
unsigned long long int arr_25 [13] [13] [13] [13] ;
long long int arr_26 [13] [13] ;
long long int arr_30 [13] [13] ;
long long int arr_42 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3197649329U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 772150335;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-30096;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (short)21494;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -1518880638;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = -977841889;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -521718475404607711LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 18317964804710241182ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 60055919U : 4113646454U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)30725 : (short)-20202;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2795294007359653227ULL : 11444549113094373085ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 15396639112408227778ULL : 6746953007442255345ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 3275217769476513665LL : -1572352219967058423LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? 7204541838268222990LL : -6461625530980657734LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8483874839111600953LL : 6980439924732779847LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
