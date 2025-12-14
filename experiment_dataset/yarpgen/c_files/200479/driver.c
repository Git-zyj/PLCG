#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1291;
short var_1 = (short)14885;
unsigned long long int var_3 = 8952593829012359360ULL;
unsigned char var_4 = (unsigned char)68;
_Bool var_5 = (_Bool)1;
long long int var_6 = -3351785935443476487LL;
signed char var_7 = (signed char)-105;
int var_8 = 588005512;
signed char var_9 = (signed char)-11;
short var_10 = (short)-15406;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-28;
signed char var_13 = (signed char)86;
unsigned short var_14 = (unsigned short)48182;
short var_15 = (short)9914;
signed char var_16 = (signed char)-22;
unsigned short arr_7 [19] [19] ;
long long int arr_16 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61404 : (unsigned short)51292;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 3350156232641797911LL : -5459405083008789031LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
