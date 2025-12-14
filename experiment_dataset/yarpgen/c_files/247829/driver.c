#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4291212968U;
unsigned int var_3 = 2910488596U;
long long int var_5 = 1483737706496721619LL;
signed char var_7 = (signed char)-38;
unsigned long long int var_8 = 1580799199746416644ULL;
unsigned char var_9 = (unsigned char)56;
int zero = 0;
int var_10 = -979453980;
signed char var_11 = (signed char)102;
unsigned char var_12 = (unsigned char)65;
unsigned int var_13 = 1082517905U;
long long int var_14 = 1453885992008935257LL;
short var_15 = (short)-20540;
unsigned short var_16 = (unsigned short)25083;
unsigned long long int var_17 = 15142494908882103748ULL;
unsigned char var_18 = (unsigned char)136;
long long int arr_0 [22] [22] ;
signed char arr_4 [22] [22] [22] ;
unsigned long long int arr_11 [18] [18] ;
int arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -144569191806114135LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 3848979909317974972ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1685324170 : -170975763;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
