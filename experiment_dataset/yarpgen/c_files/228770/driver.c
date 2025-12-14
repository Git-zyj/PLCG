#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4908754694805853692LL;
short var_1 = (short)25995;
unsigned short var_3 = (unsigned short)32887;
unsigned long long int var_5 = 17619011947354293928ULL;
unsigned int var_6 = 1488345913U;
int var_7 = -1883268673;
unsigned char var_8 = (unsigned char)208;
int var_9 = -1329435168;
long long int var_12 = 8863516716371082364LL;
unsigned short var_13 = (unsigned short)37966;
unsigned char var_14 = (unsigned char)246;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -991141670;
unsigned int var_17 = 4167917960U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)9770;
short var_20 = (short)21873;
short var_21 = (short)417;
unsigned char var_22 = (unsigned char)142;
unsigned char arr_0 [23] ;
_Bool arr_1 [23] ;
short arr_8 [18] ;
unsigned short arr_3 [23] ;
short arr_10 [18] ;
unsigned char arr_17 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)5352;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)63075;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-17391 : (short)-9374;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)119 : (unsigned char)23;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
