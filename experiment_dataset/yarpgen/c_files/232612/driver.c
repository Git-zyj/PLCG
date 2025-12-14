#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12177;
short var_10 = (short)5362;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)31796;
unsigned char var_15 = (unsigned char)228;
int zero = 0;
unsigned long long int var_17 = 9889456244209167942ULL;
signed char var_18 = (signed char)-10;
unsigned long long int var_19 = 1280478121807249357ULL;
unsigned short var_20 = (unsigned short)10364;
unsigned int var_21 = 1493451584U;
unsigned long long int arr_0 [13] ;
int arr_1 [13] ;
unsigned short arr_11 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 14164356646953671686ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1747158057;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)43796 : (unsigned short)3410;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
