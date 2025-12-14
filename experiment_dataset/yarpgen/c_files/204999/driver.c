#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10295624466704141027ULL;
int var_12 = -2081148782;
long long int var_13 = -3804395532086216695LL;
unsigned int var_15 = 2870660234U;
unsigned long long int var_16 = 1809746694631785947ULL;
int zero = 0;
unsigned int var_20 = 1264443752U;
unsigned long long int var_21 = 15324570057383946945ULL;
long long int var_22 = -6606395875164140807LL;
unsigned short var_23 = (unsigned short)55523;
unsigned char var_24 = (unsigned char)23;
unsigned char var_25 = (unsigned char)44;
unsigned short var_26 = (unsigned short)23096;
int var_27 = 1028593810;
long long int var_28 = -6386133738352180990LL;
long long int var_29 = -9219849704735911436LL;
unsigned int var_30 = 1601579800U;
int var_31 = 421586317;
signed char var_32 = (signed char)-90;
signed char arr_0 [23] ;
signed char arr_1 [23] [23] ;
unsigned int arr_2 [23] [23] ;
signed char arr_3 [23] ;
unsigned int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 604478023U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 3753668096U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
