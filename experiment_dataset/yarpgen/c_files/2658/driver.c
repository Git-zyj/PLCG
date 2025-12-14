#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14761817105108862680ULL;
unsigned long long int var_1 = 9843606666497167290ULL;
unsigned long long int var_3 = 16355290599571195454ULL;
unsigned int var_5 = 4154653363U;
unsigned char var_6 = (unsigned char)104;
unsigned char var_7 = (unsigned char)82;
int var_8 = -31878941;
unsigned short var_9 = (unsigned short)6025;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)3710;
short var_15 = (short)-19838;
unsigned char var_16 = (unsigned char)149;
long long int var_17 = -8961756458254008875LL;
unsigned char var_18 = (unsigned char)241;
unsigned char var_19 = (unsigned char)210;
int var_20 = -832647150;
int arr_0 [20] ;
unsigned char arr_2 [20] ;
long long int arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
int arr_9 [21] ;
int arr_12 [21] [21] [21] [21] ;
unsigned int arr_18 [21] [21] [21] [21] [21] ;
unsigned long long int arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2056222554;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -7293718173219436273LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -848618558;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1049226543;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 3534208702U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10205513338999104837ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
