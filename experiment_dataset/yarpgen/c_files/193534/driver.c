#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5028660421209484862ULL;
long long int var_2 = 841391386291937971LL;
long long int var_3 = -1919954034153563932LL;
long long int var_4 = 4563747332725650754LL;
unsigned char var_9 = (unsigned char)19;
unsigned char var_11 = (unsigned char)144;
unsigned long long int var_12 = 541680152605952410ULL;
unsigned long long int var_14 = 10540354054175218639ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)18;
unsigned long long int var_17 = 13837765426289212781ULL;
unsigned char var_18 = (unsigned char)16;
unsigned long long int var_19 = 5471625074888940974ULL;
unsigned long long int var_20 = 8940595282164679998ULL;
unsigned char var_21 = (unsigned char)4;
long long int var_22 = 7108744923903796089LL;
unsigned char var_23 = (unsigned char)248;
long long int var_24 = -202486571668485556LL;
long long int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned char arr_3 [16] ;
long long int arr_5 [16] ;
unsigned long long int arr_15 [17] ;
unsigned char arr_2 [18] ;
int arr_6 [16] [16] ;
unsigned long long int arr_17 [17] ;
long long int arr_18 [17] ;
unsigned long long int arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -8473697818303974800LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 16706958865707850688ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 5909474914892193933LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 10529231123060693869ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -94578883;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 11975598618981185514ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = -1191431521022854321LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 12998605848987259067ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
