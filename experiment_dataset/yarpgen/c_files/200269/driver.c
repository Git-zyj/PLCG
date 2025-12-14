#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7971459426006570824ULL;
signed char var_4 = (signed char)67;
unsigned short var_7 = (unsigned short)14943;
unsigned int var_8 = 1987665793U;
unsigned long long int var_10 = 12861436699606192034ULL;
unsigned int var_11 = 3231758517U;
short var_14 = (short)-12593;
unsigned char var_15 = (unsigned char)148;
unsigned int var_16 = 3214669496U;
int zero = 0;
short var_17 = (short)-24871;
unsigned int var_18 = 4147240248U;
unsigned int var_19 = 1828669012U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-105;
unsigned int var_22 = 3339954484U;
int var_23 = 2124900423;
unsigned char var_24 = (unsigned char)142;
unsigned long long int var_25 = 6406618030663568352ULL;
short arr_0 [24] ;
int arr_7 [14] [14] [14] ;
unsigned short arr_9 [14] [14] [14] [14] ;
short arr_10 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)3153;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1261646869;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24058;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)1098;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
