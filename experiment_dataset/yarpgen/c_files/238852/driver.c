#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58065;
unsigned short var_1 = (unsigned short)39282;
unsigned char var_2 = (unsigned char)164;
unsigned int var_3 = 587044059U;
long long int var_4 = -1835994392939353633LL;
unsigned short var_5 = (unsigned short)9369;
long long int var_6 = 2775474972998680164LL;
unsigned long long int var_7 = 538370486233417795ULL;
unsigned char var_8 = (unsigned char)212;
int zero = 0;
unsigned int var_10 = 166254569U;
unsigned int var_11 = 1220930013U;
unsigned long long int var_12 = 391397841502987424ULL;
long long int var_13 = -1338733363247985378LL;
unsigned int var_14 = 3279123839U;
unsigned int var_15 = 2822430204U;
unsigned char var_16 = (unsigned char)24;
unsigned long long int var_17 = 5403057778326667800ULL;
unsigned short var_18 = (unsigned short)47790;
long long int var_19 = 6928299972982770585LL;
unsigned int var_20 = 1068748081U;
short var_21 = (short)28704;
unsigned int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned char arr_4 [14] ;
unsigned char arr_5 [14] [14] ;
short arr_6 [14] ;
short arr_7 [17] [17] ;
unsigned long long int arr_10 [16] ;
short arr_2 [24] [24] ;
unsigned int arr_3 [24] [24] ;
unsigned char arr_12 [16] ;
unsigned char arr_13 [16] [16] ;
signed char arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14469086U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 44963189U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)189 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)11491 : (short)743;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)23344;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 5082726936282777034ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)27159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 2896782194U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (signed char)-39;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
