#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 133568433;
short var_2 = (short)29033;
signed char var_4 = (signed char)-80;
int var_5 = 641123718;
unsigned long long int var_6 = 13785961293901244071ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)63;
int zero = 0;
long long int var_10 = 1271728755343900681LL;
unsigned char var_11 = (unsigned char)204;
unsigned long long int var_12 = 15488568448344267447ULL;
unsigned char var_13 = (unsigned char)72;
int var_14 = -1264176786;
unsigned short var_15 = (unsigned short)5315;
unsigned long long int var_16 = 11569211049551983812ULL;
unsigned short var_17 = (unsigned short)13308;
unsigned char var_18 = (unsigned char)89;
long long int arr_0 [19] [19] ;
long long int arr_1 [19] ;
int arr_5 [18] [18] ;
unsigned long long int arr_10 [23] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_7 [18] ;
unsigned char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 6690421147306010802LL : 7217224026307470749LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -5344239611326623164LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 504039278;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 8612142770198557389ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 320102858136319886ULL : 6601662385421782074ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2476088953U : 3465008202U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)221;
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
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
