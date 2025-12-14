#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)23212;
signed char var_9 = (signed char)38;
unsigned char var_10 = (unsigned char)131;
long long int var_11 = -8533260592716780090LL;
int zero = 0;
long long int var_14 = 5450123316997584756LL;
unsigned long long int var_15 = 5169783991309817213ULL;
unsigned long long int var_16 = 11458480628346903947ULL;
short var_17 = (short)272;
unsigned char var_18 = (unsigned char)137;
short var_19 = (short)-29528;
long long int var_20 = -8723277912020041127LL;
unsigned short arr_0 [19] [19] ;
unsigned char arr_1 [19] [19] ;
int arr_3 [17] ;
signed char arr_5 [17] ;
short arr_9 [17] ;
unsigned char arr_6 [17] [17] ;
unsigned long long int arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)24517;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -87822915;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)-25228;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 12488826412621061876ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
