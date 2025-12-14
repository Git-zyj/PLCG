#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
int var_1 = -1728574792;
signed char var_2 = (signed char)-96;
long long int var_3 = 8675070671879762948LL;
unsigned long long int var_4 = 10549451257386673612ULL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)8780;
long long int var_9 = -6741890268507472135LL;
signed char var_10 = (signed char)-59;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9252345504674810122ULL;
signed char var_13 = (signed char)-2;
int var_14 = 95624456;
unsigned int var_15 = 805485918U;
short var_16 = (short)12045;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)9961;
signed char var_19 = (signed char)74;
unsigned short var_20 = (unsigned short)52641;
int var_21 = -162942876;
unsigned int var_22 = 4281405809U;
unsigned short arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
long long int arr_5 [22] ;
unsigned long long int arr_7 [22] ;
int arr_9 [22] ;
unsigned int arr_10 [22] [22] [22] ;
_Bool arr_12 [22] [22] [22] [22] ;
long long int arr_13 [22] [22] ;
long long int arr_14 [22] [22] [22] [22] [22] [22] ;
_Bool arr_15 [22] [22] [22] [22] [22] [22] ;
int arr_20 [23] ;
unsigned int arr_21 [23] ;
unsigned long long int arr_25 [23] [23] [23] ;
long long int arr_2 [22] ;
long long int arr_3 [22] [22] ;
int arr_4 [22] [22] ;
int arr_16 [22] ;
unsigned long long int arr_29 [23] [23] [23] [23] ;
_Bool arr_30 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36260 : (unsigned short)40324;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1697988389U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2933124932115162352LL : 6454582646858168291LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8374580811657584267ULL : 6576520736996824209ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -734160780;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2626179592U : 1606463208U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 8980040595702363444LL : 6337073590317025835LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9123087766217476028LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = -197251825;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 480593611U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 13160879871196601988ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4232009095340578909LL : -461191258130422370LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1075623699601370845LL : -6351222459217419134LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1119308986 : -1542990864;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 259837398 : -572000764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8426155770241660822ULL : 15012663115737032038ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
