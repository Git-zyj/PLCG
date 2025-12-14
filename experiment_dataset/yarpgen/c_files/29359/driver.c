#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1282419160957572004ULL;
unsigned char var_1 = (unsigned char)245;
unsigned long long int var_4 = 7849462703856359917ULL;
unsigned char var_5 = (unsigned char)110;
_Bool var_6 = (_Bool)1;
int var_8 = -1397297468;
signed char var_10 = (signed char)-98;
int var_14 = -1211993007;
signed char var_16 = (signed char)-22;
unsigned short var_18 = (unsigned short)29795;
unsigned int var_19 = 2189659543U;
int zero = 0;
unsigned int var_20 = 1583680205U;
unsigned long long int var_21 = 2249940268460430272ULL;
signed char var_22 = (signed char)-102;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)25085;
unsigned char var_26 = (unsigned char)43;
int arr_0 [25] [25] ;
unsigned int arr_2 [25] [25] ;
unsigned long long int arr_4 [25] ;
long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -560675413 : -771468822;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 94888518U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1943896626672621883ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3952691185677626623LL : -2333652609784262181LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
