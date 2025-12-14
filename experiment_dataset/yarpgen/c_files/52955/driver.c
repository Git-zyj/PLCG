#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 816776312;
unsigned char var_1 = (unsigned char)174;
long long int var_2 = 1057047451368258090LL;
short var_3 = (short)6032;
unsigned short var_4 = (unsigned short)8266;
long long int var_5 = 5127530375962613510LL;
unsigned long long int var_6 = 1125671440380242574ULL;
short var_7 = (short)4800;
unsigned long long int var_8 = 7596429070665247416ULL;
unsigned char var_9 = (unsigned char)181;
unsigned int var_10 = 3496895774U;
int zero = 0;
short var_11 = (short)20232;
signed char var_12 = (signed char)-54;
unsigned char var_13 = (unsigned char)90;
unsigned char var_14 = (unsigned char)159;
long long int var_15 = 1918597960760062098LL;
unsigned char var_16 = (unsigned char)2;
unsigned int arr_0 [13] [13] ;
int arr_2 [13] ;
unsigned long long int arr_3 [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2588940648U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -963134106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2646735960904920913ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)47645;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
