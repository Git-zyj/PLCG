#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14484;
int var_3 = -341947423;
signed char var_4 = (signed char)-34;
int var_5 = 1974343038;
unsigned char var_6 = (unsigned char)249;
unsigned int var_7 = 928638407U;
int var_10 = -2054698228;
int var_12 = -565489599;
long long int var_13 = -7921003543437055873LL;
int zero = 0;
int var_14 = 2029325265;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-27;
unsigned long long int var_17 = 11421266680141516912ULL;
signed char var_18 = (signed char)118;
signed char var_19 = (signed char)-70;
_Bool arr_1 [16] [16] ;
unsigned short arr_3 [16] [16] ;
unsigned int arr_6 [16] [16] [16] ;
long long int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)6827;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2778964117U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -815358835930219441LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
