#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11351003589143723964ULL;
unsigned long long int var_1 = 12063483547610517878ULL;
long long int var_2 = 1521563254309536117LL;
signed char var_6 = (signed char)-97;
long long int var_7 = 4943643498117204042LL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)24527;
long long int var_13 = 2894322250352663738LL;
unsigned short var_16 = (unsigned short)1085;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 23069831U;
long long int var_19 = -3165522511297304388LL;
unsigned short var_20 = (unsigned short)45085;
unsigned short arr_1 [11] ;
signed char arr_2 [11] ;
signed char arr_3 [11] [11] ;
unsigned int arr_4 [11] ;
unsigned long long int arr_5 [11] ;
_Bool arr_6 [11] [11] [11] ;
unsigned short arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)13582;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 940847287U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 13210702604055703407ULL : 12055872196207109618ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)46650 : (unsigned short)16752;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
