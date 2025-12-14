#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7708646471037904284LL;
long long int var_8 = 7715386117649732945LL;
int zero = 0;
unsigned short var_13 = (unsigned short)31863;
long long int var_14 = -5239405212456755673LL;
short var_15 = (short)32731;
unsigned char var_16 = (unsigned char)229;
short var_17 = (short)-7582;
unsigned int var_18 = 2449215647U;
unsigned short var_19 = (unsigned short)29740;
long long int arr_0 [22] ;
int arr_2 [22] [22] ;
unsigned char arr_3 [22] ;
unsigned long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2730457965477151607LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2077245466;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8320067217479280565ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
