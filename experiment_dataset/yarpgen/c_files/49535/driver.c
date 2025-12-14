#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16609258084160049810ULL;
unsigned int var_2 = 86116432U;
long long int var_3 = 5755534867335100508LL;
long long int var_5 = 8546670084108765986LL;
unsigned int var_6 = 2087284596U;
unsigned int var_7 = 3538644062U;
unsigned long long int var_8 = 3504780941463152019ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 2144579969836790055ULL;
unsigned int var_11 = 1018331127U;
int var_12 = 1545978304;
int var_13 = -734399289;
unsigned char var_14 = (unsigned char)2;
unsigned short var_15 = (unsigned short)23354;
int zero = 0;
signed char var_16 = (signed char)71;
unsigned short var_17 = (unsigned short)13498;
unsigned long long int var_18 = 15405494452008681371ULL;
unsigned char var_19 = (unsigned char)209;
signed char var_20 = (signed char)-121;
_Bool var_21 = (_Bool)0;
long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
short arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned char arr_4 [15] [15] [15] ;
int arr_7 [15] [15] [15] ;
_Bool arr_9 [15] [15] [15] ;
unsigned short arr_11 [15] [15] [15] [15] [15] ;
int arr_5 [15] [15] ;
unsigned char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -5705317507085146477LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 14442155165920246477ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)19177;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1581022693;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)27318;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 1118582705;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
