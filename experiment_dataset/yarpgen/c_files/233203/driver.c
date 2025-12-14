#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2395768718U;
int var_6 = -1241921433;
int var_7 = 148098242;
unsigned short var_9 = (unsigned short)54325;
signed char var_14 = (signed char)6;
signed char var_15 = (signed char)74;
unsigned long long int var_17 = 14589958766529681005ULL;
unsigned long long int var_19 = 3006277943697069444ULL;
int zero = 0;
unsigned long long int var_20 = 18109701386650655261ULL;
unsigned long long int var_21 = 15301468486057239036ULL;
unsigned int var_22 = 1658419967U;
unsigned int var_23 = 541784967U;
long long int var_24 = -8007298490349613170LL;
unsigned char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
signed char arr_3 [24] ;
unsigned int arr_4 [24] [24] ;
unsigned char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3041921163340016602ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 2165125083U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)180;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
