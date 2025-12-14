#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
long long int var_2 = 2669701160654792268LL;
short var_3 = (short)-25678;
short var_5 = (short)27426;
int var_6 = -845345857;
unsigned short var_7 = (unsigned short)7460;
unsigned int var_11 = 2563642476U;
long long int var_12 = -3005539953689036335LL;
short var_13 = (short)24976;
long long int var_19 = 5815381124026686285LL;
int zero = 0;
unsigned long long int var_20 = 17910372349068091182ULL;
long long int var_21 = 5205430754151775600LL;
short var_22 = (short)-16983;
unsigned int var_23 = 302788779U;
unsigned int var_24 = 1361096181U;
long long int var_25 = -7596498741002781012LL;
unsigned int arr_1 [22] ;
short arr_2 [21] ;
unsigned long long int arr_3 [21] ;
long long int arr_4 [21] ;
unsigned int arr_6 [21] [21] ;
unsigned short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3833090070U : 2052940944U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-2351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 11656715678338430400ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3311938656130078993LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1349144792U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)29050;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
