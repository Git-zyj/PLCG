#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1794755901U;
unsigned int var_2 = 1795061395U;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2346533943U;
unsigned char var_11 = (unsigned char)46;
unsigned char var_12 = (unsigned char)240;
long long int var_14 = 8532199266523604205LL;
unsigned short var_17 = (unsigned short)31832;
int zero = 0;
long long int var_18 = 8996573579853773361LL;
long long int var_19 = -5996269176688241825LL;
unsigned char var_20 = (unsigned char)67;
unsigned char var_21 = (unsigned char)61;
unsigned int var_22 = 586849464U;
unsigned short var_23 = (unsigned short)868;
unsigned short var_24 = (unsigned short)22190;
unsigned int var_25 = 2027367466U;
unsigned int var_26 = 3847591388U;
signed char var_27 = (signed char)-112;
unsigned char var_28 = (unsigned char)60;
unsigned int var_29 = 4189417670U;
unsigned short var_30 = (unsigned short)36885;
_Bool var_31 = (_Bool)1;
unsigned int arr_0 [14] ;
long long int arr_4 [14] [14] [14] ;
unsigned short arr_5 [14] [14] ;
long long int arr_7 [14] [14] ;
int arr_8 [14] ;
short arr_9 [14] [14] [14] ;
unsigned long long int arr_12 [14] [14] ;
unsigned short arr_14 [14] ;
unsigned short arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1259118029U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1359448646335571347LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)55922;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 8546680052482928720LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -1028572628;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)26985;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 7093233236905645135ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned short)52873;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned short)11549;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
