#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15833676211063296076ULL;
short var_13 = (short)-24019;
unsigned char var_14 = (unsigned char)136;
unsigned char var_16 = (unsigned char)229;
int var_17 = 225936164;
int zero = 0;
unsigned char var_18 = (unsigned char)140;
unsigned int var_19 = 3521957766U;
long long int var_20 = -447246778670435878LL;
long long int var_21 = 8344477337940870070LL;
long long int var_22 = -6629166632802219297LL;
unsigned char var_23 = (unsigned char)203;
unsigned char var_24 = (unsigned char)75;
signed char arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned long long int arr_3 [12] ;
unsigned int arr_4 [12] [12] [12] ;
int arr_5 [12] [12] [12] ;
unsigned int arr_6 [12] [12] ;
signed char arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)116 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 184932740U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)21358;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14684906197137754593ULL : 17952418317374264379ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 837511308U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1680880404 : -1937493150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2637057909U : 3452460238U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)75;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
