#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2489488647786307565ULL;
unsigned int var_1 = 3427279483U;
unsigned short var_3 = (unsigned short)45333;
int var_4 = 1228423868;
unsigned short var_5 = (unsigned short)30933;
unsigned short var_6 = (unsigned short)16937;
unsigned short var_7 = (unsigned short)61419;
int var_8 = -1914935756;
unsigned int var_9 = 678749617U;
int zero = 0;
int var_10 = -822160424;
signed char var_11 = (signed char)58;
unsigned long long int var_12 = 1727514754047464846ULL;
int var_13 = 578271817;
unsigned char var_14 = (unsigned char)55;
unsigned char var_15 = (unsigned char)251;
unsigned short var_16 = (unsigned short)59633;
unsigned long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned char arr_2 [25] ;
unsigned short arr_5 [25] [25] ;
signed char arr_7 [25] ;
short arr_8 [25] [25] [25] [25] ;
unsigned long long int arr_16 [19] [19] ;
int arr_20 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 14096125166068572756ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)26149;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)52097;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-281;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 17558442629270782893ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -1478346824 : -651211799;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
