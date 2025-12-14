#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40218;
unsigned short var_4 = (unsigned short)2912;
unsigned long long int var_6 = 3456718584299945400ULL;
unsigned short var_7 = (unsigned short)32392;
unsigned char var_8 = (unsigned char)45;
unsigned short var_10 = (unsigned short)44124;
unsigned long long int var_11 = 129815903349730792ULL;
unsigned long long int var_13 = 296907099627386187ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)135;
unsigned long long int var_15 = 6095529707631843656ULL;
unsigned char var_16 = (unsigned char)35;
unsigned short var_17 = (unsigned short)24103;
unsigned long long int var_18 = 4970673065942149571ULL;
unsigned short var_19 = (unsigned short)31590;
unsigned long long int var_20 = 12272459520605997712ULL;
unsigned char var_21 = (unsigned char)36;
unsigned char var_22 = (unsigned char)182;
unsigned char var_23 = (unsigned char)180;
unsigned long long int arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_3 [19] ;
unsigned long long int arr_6 [19] ;
unsigned short arr_15 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 4270377002903006692ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 11805502681050067687ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)30210 : (unsigned short)30778;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
