#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15700018115593898874ULL;
unsigned char var_6 = (unsigned char)182;
long long int var_9 = -3921051081710319206LL;
signed char var_11 = (signed char)-68;
unsigned char var_12 = (unsigned char)34;
int var_14 = 249965345;
int zero = 0;
unsigned int var_15 = 2474347134U;
unsigned long long int var_16 = 14048030026092230250ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-82;
unsigned char var_19 = (unsigned char)238;
unsigned short var_20 = (unsigned short)13245;
unsigned long long int var_21 = 1451772957690444246ULL;
_Bool var_22 = (_Bool)1;
_Bool arr_2 [16] ;
short arr_3 [16] ;
unsigned long long int arr_4 [16] [16] [16] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned long long int arr_7 [16] [16] [16] ;
unsigned int arr_11 [16] ;
unsigned char arr_12 [16] ;
int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)13971;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2262673166642697683ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 13669326516023504132ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 12069536611834585251ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3832647967471108212ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 705986916U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -1741660221;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
