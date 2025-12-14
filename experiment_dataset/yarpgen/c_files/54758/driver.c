#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7909363265733866326LL;
unsigned long long int var_3 = 1585131045159386023ULL;
unsigned short var_4 = (unsigned short)65000;
unsigned short var_6 = (unsigned short)1879;
long long int var_8 = -4455659737007536721LL;
unsigned long long int var_11 = 18262987229095672420ULL;
unsigned long long int var_13 = 2843336162208474996ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)45286;
unsigned long long int var_15 = 12447406427416695375ULL;
signed char var_16 = (signed char)-9;
unsigned short var_17 = (unsigned short)32093;
signed char arr_0 [15] ;
long long int arr_1 [15] [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 2547403006474662727LL : -7817150392992359626LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54464 : (unsigned short)24286;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
