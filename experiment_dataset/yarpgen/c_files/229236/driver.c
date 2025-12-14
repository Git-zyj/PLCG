#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)107;
unsigned char var_8 = (unsigned char)81;
unsigned short var_14 = (unsigned short)32892;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
unsigned char var_17 = (unsigned char)11;
long long int var_18 = -4931872717860686953LL;
int var_19 = 927584790;
long long int var_20 = 8919960018596048471LL;
unsigned long long int var_21 = 16017206508234057099ULL;
unsigned short arr_1 [10] [10] ;
long long int arr_2 [10] ;
short arr_3 [10] ;
short arr_4 [10] ;
short arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)43980;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -2469839845873710861LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-5729;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-31328;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-2801;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
