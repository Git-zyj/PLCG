#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6063348097073868104LL;
long long int var_1 = 7101369515604767148LL;
long long int var_5 = -1198867296720504530LL;
long long int var_7 = -3708220564347062024LL;
unsigned int var_9 = 3984451258U;
long long int var_10 = -4219494582136688948LL;
signed char var_11 = (signed char)0;
short var_12 = (short)9856;
long long int var_13 = 1365557665459003503LL;
unsigned long long int var_14 = 16376030206615295005ULL;
unsigned long long int var_15 = 7989690928841549025ULL;
long long int var_17 = 312996635701883561LL;
long long int var_18 = -7000111084614342445LL;
unsigned long long int var_19 = 5725332961251037603ULL;
int zero = 0;
signed char var_20 = (signed char)25;
long long int var_21 = 6638901252209505497LL;
unsigned long long int var_22 = 2948379321496125309ULL;
signed char var_23 = (signed char)69;
unsigned int var_24 = 2656387581U;
short var_25 = (short)7548;
unsigned long long int var_26 = 9590519145872993983ULL;
short var_27 = (short)6881;
short var_28 = (short)25859;
long long int var_29 = -8890080017551007618LL;
short var_30 = (short)-25903;
short var_31 = (short)28424;
short var_32 = (short)-20849;
short var_33 = (short)9414;
unsigned char var_34 = (unsigned char)60;
signed char arr_0 [17] ;
unsigned long long int arr_2 [17] [17] ;
short arr_3 [17] ;
short arr_4 [17] [17] [17] ;
short arr_5 [17] [17] ;
signed char arr_6 [17] [17] [17] [17] ;
long long int arr_7 [17] [17] [17] [17] ;
long long int arr_8 [17] [17] [17] [17] [17] ;
short arr_9 [17] [17] [17] [17] [17] [17] ;
short arr_16 [17] [17] [17] [17] ;
unsigned long long int arr_13 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 9499825352057992007ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)27160;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)25092;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-9976;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6382865672142147602LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 4310242279496135723LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)12365;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)-9974;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13591139657424456306ULL : 7048868277534496836ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
