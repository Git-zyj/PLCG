#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
int var_2 = -576413720;
int var_3 = -612508585;
unsigned char var_7 = (unsigned char)159;
unsigned long long int var_8 = 10210186149812180572ULL;
unsigned short var_15 = (unsigned short)55253;
int var_16 = 585060924;
unsigned char var_17 = (unsigned char)183;
int zero = 0;
unsigned char var_18 = (unsigned char)25;
unsigned char var_19 = (unsigned char)143;
short var_20 = (short)11401;
unsigned long long int var_21 = 6167272339427747129ULL;
unsigned char var_22 = (unsigned char)154;
int var_23 = -782080473;
unsigned long long int arr_0 [22] [22] ;
int arr_1 [22] [22] ;
signed char arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 8311383481660067268ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -456676740;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)19083;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
