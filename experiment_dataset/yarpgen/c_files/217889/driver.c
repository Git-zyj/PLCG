#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned long long int var_4 = 8599895011085001992ULL;
long long int var_6 = 4499954643333582650LL;
unsigned char var_8 = (unsigned char)29;
long long int var_11 = 3967785940840607750LL;
long long int var_13 = 7470331160332842119LL;
unsigned char var_14 = (unsigned char)255;
signed char var_15 = (signed char)125;
int zero = 0;
signed char var_18 = (signed char)-5;
unsigned char var_19 = (unsigned char)232;
unsigned char var_20 = (unsigned char)141;
unsigned short var_21 = (unsigned short)59503;
unsigned char arr_6 [11] ;
unsigned long long int arr_7 [11] ;
short arr_12 [11] [11] [11] ;
long long int arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
unsigned long long int arr_14 [11] ;
long long int arr_18 [22] ;
unsigned char arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 14541443039873059629ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-25898;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3410283843271451528LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 9578320852279430861ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 298280235939165392LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (unsigned char)100;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
