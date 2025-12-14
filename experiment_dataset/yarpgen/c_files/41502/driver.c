#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31110;
int var_2 = -1145347186;
unsigned long long int var_3 = 15050734117869597446ULL;
unsigned short var_4 = (unsigned short)45435;
short var_6 = (short)2580;
short var_7 = (short)-25644;
unsigned long long int var_8 = 17504046797582328890ULL;
unsigned char var_11 = (unsigned char)231;
signed char var_12 = (signed char)-80;
unsigned char var_13 = (unsigned char)194;
int var_14 = -226000516;
signed char var_15 = (signed char)101;
int zero = 0;
unsigned short var_16 = (unsigned short)40118;
long long int var_17 = -5806483837692441419LL;
int var_18 = 123447648;
short var_19 = (short)-24938;
unsigned long long int var_20 = 1942508749804757932ULL;
unsigned short var_21 = (unsigned short)17621;
unsigned long long int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
unsigned char arr_2 [24] [24] ;
signed char arr_4 [10] [10] ;
short arr_5 [10] ;
_Bool arr_6 [10] ;
unsigned char arr_9 [25] ;
unsigned char arr_10 [25] ;
unsigned long long int arr_3 [24] [24] ;
int arr_7 [10] ;
unsigned char arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 13881629167109951668ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)4788;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 3893939355630607926ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -807578282 : -910096479;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)135 : (unsigned char)43;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
