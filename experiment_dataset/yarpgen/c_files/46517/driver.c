#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10492154081610665158ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)15348;
signed char var_5 = (signed char)-122;
unsigned short var_6 = (unsigned short)64069;
unsigned char var_7 = (unsigned char)165;
unsigned long long int var_9 = 10439498935302366013ULL;
unsigned short var_10 = (unsigned short)14998;
long long int var_11 = -5841557247820524976LL;
short var_12 = (short)-28276;
int var_13 = 298923416;
int zero = 0;
signed char var_15 = (signed char)-19;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)151;
unsigned short var_18 = (unsigned short)6459;
unsigned char var_19 = (unsigned char)72;
short var_20 = (short)-4644;
unsigned char var_21 = (unsigned char)208;
int var_22 = 1758214380;
long long int arr_4 [13] ;
long long int arr_11 [13] ;
unsigned char arr_12 [13] [13] ;
unsigned long long int arr_18 [25] [25] ;
unsigned short arr_19 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -6649311679165222885LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = -3852658104349407264LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 17841610797874236704ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (unsigned short)6239;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
