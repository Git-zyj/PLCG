#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
short var_1 = (short)-1082;
long long int var_2 = 8240001556277330139LL;
unsigned int var_3 = 687163705U;
unsigned long long int var_4 = 1659918050725589863ULL;
short var_5 = (short)23619;
short var_6 = (short)-155;
unsigned char var_7 = (unsigned char)12;
unsigned long long int var_8 = 13851447306844885801ULL;
unsigned int var_9 = 3548290948U;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
short var_11 = (short)-1333;
unsigned int var_12 = 3628862592U;
long long int var_13 = 2020227014155819997LL;
signed char var_14 = (signed char)-85;
unsigned short var_15 = (unsigned short)27229;
unsigned long long int var_16 = 15549201441449389450ULL;
long long int var_17 = -3543000425727315278LL;
signed char arr_0 [15] ;
int arr_1 [15] ;
int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
int arr_4 [15] [15] ;
int arr_5 [15] ;
short arr_7 [15] [15] [15] ;
unsigned char arr_8 [15] ;
unsigned int arr_9 [15] [15] [15] [15] ;
unsigned char arr_10 [12] ;
unsigned char arr_11 [12] ;
unsigned short arr_12 [12] ;
unsigned int arr_13 [12] [12] ;
unsigned short arr_14 [12] [12] ;
signed char arr_19 [12] [12] ;
short arr_15 [12] [12] [12] ;
long long int arr_16 [12] ;
signed char arr_20 [12] ;
unsigned long long int arr_21 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1087132556;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1339248473;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 7171810120492995800ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -1973469892;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -644419882;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-31955;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1080419543U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)55046;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1793024410U : 1674553064U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)13238;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-12874 : (short)15564;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = -132727346784468723LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 8758898663301192870ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
