#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7696;
long long int var_1 = 597364647662788563LL;
int var_4 = -296247322;
unsigned short var_5 = (unsigned short)2581;
int var_8 = -1243133709;
signed char var_9 = (signed char)-38;
unsigned long long int var_10 = 4572739081485921880ULL;
unsigned char var_12 = (unsigned char)24;
signed char var_13 = (signed char)31;
signed char var_14 = (signed char)39;
short var_15 = (short)-16015;
int zero = 0;
long long int var_16 = -5100056304096682934LL;
unsigned char var_17 = (unsigned char)14;
long long int var_18 = 1171833268080482829LL;
signed char var_19 = (signed char)32;
unsigned long long int var_20 = 10603837930151818482ULL;
unsigned char var_21 = (unsigned char)128;
signed char arr_0 [25] ;
unsigned int arr_3 [22] [22] ;
signed char arr_5 [22] ;
_Bool arr_2 [25] [25] ;
unsigned int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 353002980U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 88155011U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
