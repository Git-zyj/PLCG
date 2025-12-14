#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13699368846090526658ULL;
signed char var_4 = (signed char)48;
signed char var_10 = (signed char)-115;
unsigned short var_13 = (unsigned short)43034;
unsigned long long int var_14 = 2758067483887650921ULL;
int zero = 0;
unsigned long long int var_16 = 1516631797308295441ULL;
unsigned long long int var_17 = 16953173518415560454ULL;
unsigned long long int var_18 = 16807835566927669005ULL;
unsigned char var_19 = (unsigned char)186;
signed char arr_1 [13] ;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)224;
}

void checksum() {
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
