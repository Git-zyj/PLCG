#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
unsigned int var_4 = 2483278646U;
unsigned char var_5 = (unsigned char)179;
unsigned int var_6 = 1039226528U;
unsigned long long int var_8 = 11851921861445955189ULL;
unsigned char var_14 = (unsigned char)146;
unsigned short var_15 = (unsigned short)11783;
long long int var_16 = 5028840727429203176LL;
signed char var_17 = (signed char)96;
int zero = 0;
signed char var_18 = (signed char)70;
int var_19 = -1557753976;
unsigned char var_20 = (unsigned char)28;
unsigned int var_21 = 3432059529U;
unsigned short var_22 = (unsigned short)14317;
int arr_5 [22] ;
unsigned long long int arr_2 [13] ;
signed char arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -1089497567;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 14811931298627154171ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)15;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
