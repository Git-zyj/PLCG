#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1290321237;
short var_3 = (short)22417;
unsigned short var_4 = (unsigned short)57776;
short var_5 = (short)-31071;
short var_6 = (short)6328;
unsigned int var_7 = 1552929650U;
int var_9 = -374676889;
int zero = 0;
int var_12 = -1690513654;
signed char var_13 = (signed char)-88;
int var_14 = -434794753;
unsigned char var_15 = (unsigned char)35;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6463364931677527212LL;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
short arr_2 [12] ;
long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)22316;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-27767;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1192174223511473773LL : 8886977350699018019LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
