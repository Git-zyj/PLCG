#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1215841164;
unsigned char var_1 = (unsigned char)142;
short var_2 = (short)-467;
short var_3 = (short)10169;
unsigned int var_4 = 212751130U;
signed char var_6 = (signed char)100;
signed char var_7 = (signed char)70;
unsigned int var_8 = 2884059743U;
int zero = 0;
signed char var_10 = (signed char)-36;
signed char var_11 = (signed char)-82;
signed char var_12 = (signed char)-69;
unsigned char var_13 = (unsigned char)99;
unsigned short var_14 = (unsigned short)53417;
unsigned long long int var_15 = 17651656233746591141ULL;
unsigned char var_16 = (unsigned char)253;
unsigned int var_17 = 840999284U;
unsigned long long int var_18 = 7815692970235009484ULL;
unsigned char var_19 = (unsigned char)44;
unsigned long long int var_20 = 4854310332343477995ULL;
signed char var_21 = (signed char)-14;
unsigned char var_22 = (unsigned char)5;
unsigned int var_23 = 3394701574U;
unsigned short var_24 = (unsigned short)44824;
short var_25 = (short)-8052;
unsigned char var_26 = (unsigned char)195;
signed char var_27 = (signed char)44;
unsigned int var_28 = 4094173262U;
unsigned char var_29 = (unsigned char)134;
unsigned char var_30 = (unsigned char)40;
unsigned short var_31 = (unsigned short)19940;
unsigned long long int var_32 = 14140188969956375788ULL;
unsigned short var_33 = (unsigned short)53391;
unsigned char var_34 = (unsigned char)15;
unsigned int var_35 = 474726501U;
long long int var_36 = 2940295494379901307LL;
short var_37 = (short)14581;
unsigned char arr_0 [13] ;
signed char arr_1 [13] ;
signed char arr_2 [13] ;
long long int arr_3 [13] ;
short arr_4 [13] ;
signed char arr_5 [13] ;
unsigned int arr_6 [13] [13] [13] [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
_Bool arr_8 [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] ;
unsigned char arr_11 [13] [13] [13] ;
long long int arr_12 [13] [13] [13] ;
unsigned char arr_15 [13] [13] ;
signed char arr_16 [13] [13] [13] [13] ;
unsigned long long int arr_17 [13] [13] [13] [13] ;
int arr_18 [13] [13] ;
unsigned char arr_19 [13] [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_26 [13] [13] [13] ;
short arr_28 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1879393577452706728LL : 7243794324692224731LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)14750 : (short)25462;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1242386188U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 11701717635389295252ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 14989022045848245520ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3904246522711697912LL : -8753184611948913204LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 11140405208776104495ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 987024778 : -371024217;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned char)100 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5011456849211899063ULL : 8018997832316410564ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (short)5136;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
