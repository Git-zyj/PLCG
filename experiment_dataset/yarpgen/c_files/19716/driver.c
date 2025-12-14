#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1761700323U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4370213243478844595LL;
unsigned int var_4 = 3147153740U;
unsigned short var_5 = (unsigned short)23984;
int var_6 = 1324395168;
signed char var_7 = (signed char)-89;
unsigned long long int var_9 = 7108366083428543326ULL;
short var_11 = (short)3781;
unsigned long long int var_12 = 13103003709662734898ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)46;
unsigned char var_14 = (unsigned char)228;
_Bool var_15 = (_Bool)0;
int var_16 = 1635456353;
long long int var_17 = 3969355867954271659LL;
short var_18 = (short)5197;
unsigned char var_19 = (unsigned char)223;
unsigned int var_20 = 520698445U;
unsigned int var_21 = 2997767559U;
signed char var_22 = (signed char)-21;
unsigned int var_23 = 988242854U;
long long int var_24 = 2866222692175037713LL;
signed char var_25 = (signed char)126;
unsigned int arr_3 [22] ;
short arr_4 [22] [22] ;
unsigned char arr_8 [22] ;
signed char arr_9 [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] [22] [22] ;
unsigned char arr_19 [22] [22] [22] [22] [22] [22] ;
long long int arr_26 [23] ;
unsigned short arr_27 [23] [23] ;
signed char arr_28 [23] ;
int arr_30 [23] [23] ;
unsigned short arr_31 [23] [23] [23] ;
unsigned int arr_39 [23] [23] [23] [23] ;
signed char arr_13 [22] ;
unsigned long long int arr_16 [22] [22] [22] [22] ;
_Bool arr_21 [22] [22] [22] [22] ;
signed char arr_22 [22] [22] [22] [22] [22] ;
unsigned short arr_25 [14] [14] ;
int arr_40 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 522075439U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)22169;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)155 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = 4940346818709331196LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)27512;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = -1439622264;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)10783;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 3087919492U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 4620162160052977952ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-72 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12341 : (unsigned short)9458;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = 26827698;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
