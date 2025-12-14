#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned short var_1 = (unsigned short)34329;
long long int var_2 = -3278482319579378885LL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)137;
unsigned long long int var_5 = 9308760213595160439ULL;
signed char var_6 = (signed char)-37;
unsigned int var_7 = 1237445510U;
signed char var_8 = (signed char)99;
long long int var_9 = 8566683530497235247LL;
signed char var_12 = (signed char)100;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
int var_16 = -605730527;
int var_17 = 537813798;
short var_18 = (short)31417;
int var_19 = 177749814;
unsigned int var_20 = 3922001342U;
unsigned short var_21 = (unsigned short)3297;
long long int arr_7 [13] [13] ;
int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 3495423696778468091LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 1024873526;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
