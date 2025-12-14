#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21895;
_Bool var_3 = (_Bool)0;
long long int var_4 = 7549882425629110428LL;
unsigned char var_5 = (unsigned char)107;
unsigned char var_6 = (unsigned char)5;
long long int var_7 = 1604675835304378113LL;
unsigned short var_8 = (unsigned short)20292;
unsigned char var_9 = (unsigned char)44;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_16 = (short)26208;
int zero = 0;
unsigned long long int var_17 = 15224861870962594688ULL;
unsigned int var_18 = 4245234687U;
unsigned char var_19 = (unsigned char)76;
int var_20 = -1979784329;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)22660;
long long int arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
int arr_3 [18] [18] [18] ;
unsigned int arr_4 [18] ;
unsigned int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5066446083517196179LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1480067807;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3895828313U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 941611101U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
