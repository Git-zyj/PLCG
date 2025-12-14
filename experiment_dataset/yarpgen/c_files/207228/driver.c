#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)73;
signed char var_7 = (signed char)-103;
unsigned char var_8 = (unsigned char)251;
signed char var_10 = (signed char)-84;
unsigned long long int var_12 = 13228866791984608713ULL;
int var_13 = 1432652182;
int zero = 0;
short var_16 = (short)-23191;
short var_17 = (short)3021;
int var_18 = -372449383;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13593621698882659376ULL;
signed char var_21 = (signed char)-107;
int var_22 = -1819705800;
unsigned char var_23 = (unsigned char)25;
_Bool arr_0 [20] [20] ;
int arr_2 [20] [20] ;
unsigned long long int arr_5 [18] ;
unsigned int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1286483771 : -493024195;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 6967243239576163231ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2433681227U : 4040207212U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
