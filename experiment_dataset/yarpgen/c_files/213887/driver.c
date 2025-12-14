#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3826173501U;
long long int var_2 = -1202090671400552839LL;
unsigned char var_4 = (unsigned char)175;
unsigned char var_8 = (unsigned char)78;
unsigned int var_9 = 1027528447U;
unsigned int var_10 = 1561736274U;
long long int var_11 = -5738169167503643222LL;
unsigned int var_12 = 635674704U;
unsigned int var_13 = 616865437U;
long long int var_14 = -501454173942712462LL;
signed char var_15 = (signed char)-16;
int zero = 0;
int var_16 = 1783313927;
signed char var_17 = (signed char)-79;
signed char var_18 = (signed char)30;
int var_19 = 115576996;
unsigned long long int arr_0 [17] ;
long long int arr_3 [17] ;
unsigned char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 13771958658354540835ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -8625272626911958521LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)55;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
