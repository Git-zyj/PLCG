#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3053;
unsigned char var_1 = (unsigned char)82;
long long int var_3 = -3444525509497979241LL;
unsigned short var_4 = (unsigned short)52994;
signed char var_7 = (signed char)93;
unsigned long long int var_9 = 9664748055369230451ULL;
unsigned short var_10 = (unsigned short)61960;
unsigned int var_11 = 776856855U;
unsigned long long int var_13 = 12714491637356466883ULL;
int zero = 0;
unsigned long long int var_14 = 16640486161325951452ULL;
long long int var_15 = 8318326946296334648LL;
unsigned long long int var_16 = 9259902867798236044ULL;
unsigned int var_17 = 1636893224U;
unsigned long long int var_18 = 7822186752187999581ULL;
unsigned int arr_0 [12] ;
int arr_1 [12] ;
unsigned char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3084877434U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 189825613;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)46 : (unsigned char)83;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
