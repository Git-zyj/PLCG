#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28478;
long long int var_3 = 5107126152105515135LL;
long long int var_4 = -5092756358188493244LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)0;
unsigned long long int var_9 = 2899583798578317210ULL;
int zero = 0;
signed char var_10 = (signed char)-43;
unsigned int var_11 = 387159392U;
signed char var_12 = (signed char)99;
short var_13 = (short)-3966;
unsigned long long int var_14 = 128323013322366958ULL;
long long int var_15 = 7685955769391654516LL;
unsigned long long int var_16 = 17846948879864247087ULL;
signed char var_17 = (signed char)-56;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3336121501833439757LL;
long long int var_21 = -1122230062060073291LL;
unsigned long long int var_22 = 11458002407093353578ULL;
long long int var_23 = -9151113098204715568LL;
long long int var_24 = 7557026399718604831LL;
signed char var_25 = (signed char)-117;
long long int var_26 = -7635992200314280135LL;
unsigned char var_27 = (unsigned char)228;
long long int var_28 = 8280864410283396447LL;
long long int var_29 = -1065685648171259920LL;
short var_30 = (short)-24347;
long long int var_31 = 7363893922579334632LL;
unsigned char var_32 = (unsigned char)99;
long long int var_33 = 8053189450585930385LL;
unsigned int var_34 = 3831156621U;
signed char var_35 = (signed char)43;
unsigned int var_36 = 1300193644U;
signed char var_37 = (signed char)-84;
unsigned char var_38 = (unsigned char)104;
unsigned char var_39 = (unsigned char)30;
long long int var_40 = -3000523248539842242LL;
short var_41 = (short)27206;
unsigned long long int var_42 = 11024392983051756105ULL;
signed char var_43 = (signed char)-9;
signed char var_44 = (signed char)80;
short var_45 = (short)4261;
_Bool var_46 = (_Bool)0;
short var_47 = (short)14234;
long long int var_48 = -8226777800219297189LL;
unsigned long long int var_49 = 12787649683362572975ULL;
long long int var_50 = -2273934803491921193LL;
unsigned long long int var_51 = 12894518064745193828ULL;
signed char var_52 = (signed char)-118;
unsigned short arr_0 [14] [14] ;
signed char arr_3 [14] [14] [14] ;
short arr_9 [16] [16] [16] ;
short arr_11 [16] [16] [16] ;
unsigned int arr_12 [16] [16] [16] ;
_Bool arr_13 [16] [16] ;
unsigned long long int arr_14 [16] [16] [16] ;
unsigned long long int arr_17 [16] [16] [16] [16] [16] [16] [16] ;
signed char arr_19 [24] ;
short arr_21 [24] [24] ;
unsigned int arr_24 [24] [24] [24] ;
unsigned long long int arr_25 [24] [24] ;
signed char arr_29 [24] [24] [24] [24] ;
signed char arr_34 [24] [24] [24] [24] [24] ;
unsigned long long int arr_40 [24] [24] [24] ;
signed char arr_41 [24] [24] [24] ;
unsigned int arr_46 [24] ;
unsigned char arr_59 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)9594;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-6037;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-12645;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 4210675686U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 11653956010945258691ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 12804430649528296315ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-29123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 890409868U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = 15871943421941997721ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 15148799191770057763ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_46 [i_0] = 2403350928U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (unsigned char)125;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
