#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33726;
unsigned int var_1 = 1041461945U;
unsigned long long int var_2 = 4714431402897059034ULL;
unsigned int var_3 = 1919187455U;
int var_4 = -467932981;
signed char var_5 = (signed char)116;
short var_6 = (short)21470;
short var_7 = (short)-26436;
int var_8 = -906298117;
long long int var_9 = 48824848931253278LL;
short var_10 = (short)-11119;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-6957;
unsigned int var_13 = 2386698749U;
signed char var_14 = (signed char)-19;
short var_15 = (short)-19259;
int zero = 0;
unsigned int var_16 = 2132038797U;
signed char var_17 = (signed char)55;
short var_18 = (short)23992;
signed char var_19 = (signed char)42;
unsigned long long int var_20 = 450774621326874005ULL;
short var_21 = (short)-13692;
signed char var_22 = (signed char)-91;
int var_23 = -2137428780;
int var_24 = 434664645;
signed char var_25 = (signed char)-63;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 7083910107102445224ULL;
signed char var_28 = (signed char)60;
unsigned char var_29 = (unsigned char)212;
unsigned int var_30 = 1436330545U;
unsigned char arr_0 [22] [22] ;
_Bool arr_1 [22] ;
unsigned int arr_2 [22] ;
signed char arr_3 [22] [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
unsigned int arr_8 [22] [22] [22] ;
short arr_9 [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] ;
signed char arr_12 [22] ;
signed char arr_14 [22] ;
signed char arr_15 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)206 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2168398403U : 2230751743U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 10285302807130792618ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15793807645069197672ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1430581405U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-25445;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-108;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
