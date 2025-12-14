#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3340850447120030768ULL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)14441;
unsigned short var_5 = (unsigned short)11074;
unsigned int var_6 = 2213187318U;
unsigned long long int var_7 = 4599420957051029718ULL;
int zero = 0;
short var_10 = (short)-10477;
short var_11 = (short)-28366;
short var_12 = (short)21399;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-12807;
unsigned long long int var_15 = 7189116493862416924ULL;
short var_16 = (short)23085;
unsigned int var_17 = 1901247797U;
unsigned char var_18 = (unsigned char)15;
_Bool var_19 = (_Bool)0;
long long int var_20 = -1816728973800576606LL;
unsigned long long int var_21 = 7568935646991539668ULL;
unsigned short arr_0 [16] ;
long long int arr_1 [16] ;
unsigned short arr_2 [16] ;
short arr_3 [16] [16] ;
unsigned int arr_5 [17] ;
unsigned char arr_7 [17] [17] ;
unsigned int arr_10 [17] [17] ;
unsigned short arr_11 [17] ;
unsigned char arr_12 [17] [17] [17] [17] ;
unsigned short arr_4 [16] ;
long long int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)53856;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -6890273729726339539LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)44676;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22323;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 323606006U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 905510178U : 1992664928U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)31729;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)14173;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 5979842858624723384LL : 9178206288733211258LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
