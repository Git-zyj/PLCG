#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned int var_1 = 268108813U;
signed char var_3 = (signed char)-81;
short var_5 = (short)31052;
unsigned short var_6 = (unsigned short)54607;
unsigned char var_7 = (unsigned char)1;
unsigned short var_10 = (unsigned short)45641;
int zero = 0;
long long int var_11 = 333975190099702765LL;
signed char var_12 = (signed char)123;
unsigned char var_13 = (unsigned char)136;
short var_14 = (short)22421;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)110;
short var_17 = (short)32579;
unsigned long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
long long int arr_3 [25] ;
short arr_4 [25] ;
unsigned int arr_5 [12] ;
unsigned char arr_2 [21] ;
short arr_8 [12] [12] ;
signed char arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5770850423326854406ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)56691;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -7846765921377410950LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-29905;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3964987098U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-18986;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)-102;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
