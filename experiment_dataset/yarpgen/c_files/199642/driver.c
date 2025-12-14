#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-81;
unsigned char var_3 = (unsigned char)88;
unsigned char var_4 = (unsigned char)255;
unsigned char var_6 = (unsigned char)6;
unsigned char var_7 = (unsigned char)196;
unsigned short var_8 = (unsigned short)350;
int var_9 = 1085148526;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)75;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8424664992409084150LL;
long long int var_14 = 404546994234272949LL;
int zero = 0;
long long int var_15 = 1148049051986284293LL;
unsigned char var_16 = (unsigned char)195;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)23;
unsigned short var_19 = (unsigned short)22551;
unsigned short arr_0 [19] ;
short arr_1 [19] [19] ;
unsigned short arr_2 [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)4104;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-27945;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)37842;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 15922363922686838327ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
