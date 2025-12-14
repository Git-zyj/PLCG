#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
_Bool var_2 = (_Bool)1;
short var_3 = (short)7255;
unsigned char var_4 = (unsigned char)243;
long long int var_6 = 1158097433303221682LL;
unsigned long long int var_7 = 463509928644082487ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6166832217577339770ULL;
unsigned long long int var_13 = 261660285561524406ULL;
int zero = 0;
unsigned long long int var_16 = 3419139154626964307ULL;
unsigned long long int var_17 = 7949484318968723495ULL;
unsigned long long int var_18 = 13207405253436104798ULL;
unsigned int var_19 = 2716044791U;
long long int var_20 = -8452165032252118293LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 6944723623199718207LL;
unsigned long long int var_23 = 15178418945798584982ULL;
int var_24 = 1429755801;
short arr_2 [24] [24] ;
_Bool arr_7 [24] [24] [24] [24] ;
unsigned int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-29640 : (short)28440;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3032981456U : 2338738707U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
