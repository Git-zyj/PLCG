#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
long long int var_3 = 5357822299853498978LL;
unsigned long long int var_11 = 9640626184908234472ULL;
long long int var_16 = -1366090518908371989LL;
long long int var_17 = 5666172241531458875LL;
unsigned char var_18 = (unsigned char)17;
int zero = 0;
signed char var_20 = (signed char)-3;
short var_21 = (short)18924;
long long int var_22 = 852883570415082652LL;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)121 : (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14131791330579515597ULL : 2290275652455028081ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1276551950 : -861152195;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
