#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 772614045;
unsigned short var_2 = (unsigned short)3646;
long long int var_3 = -6829565265848307694LL;
unsigned char var_4 = (unsigned char)30;
unsigned long long int var_6 = 5179660759690163945ULL;
unsigned char var_8 = (unsigned char)18;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
long long int var_10 = -1262486894656868653LL;
unsigned char var_11 = (unsigned char)208;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3106824430538624472LL;
unsigned int var_14 = 4288163125U;
unsigned int var_15 = 3271462894U;
unsigned long long int var_16 = 4281810698473943013ULL;
_Bool var_17 = (_Bool)0;
short arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_3 [16] [16] ;
int arr_4 [16] [16] ;
short arr_6 [18] ;
_Bool arr_2 [25] ;
long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)12511;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -1722647916;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)26873;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 5760871681050938422LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
