#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45144;
unsigned long long int var_6 = 12672735463462163ULL;
long long int var_8 = -5905002527998173333LL;
unsigned char var_12 = (unsigned char)211;
unsigned long long int var_14 = 4661361416210101302ULL;
int zero = 0;
signed char var_15 = (signed char)-72;
unsigned char var_16 = (unsigned char)252;
long long int var_17 = 8242886935332875249LL;
long long int var_18 = -8860520591150156986LL;
signed char var_19 = (signed char)-72;
int arr_2 [19] ;
signed char arr_3 [19] ;
signed char arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -984323420;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-63 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)9;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
