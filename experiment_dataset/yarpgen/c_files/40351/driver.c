#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
unsigned long long int var_1 = 3166890774409861874ULL;
signed char var_8 = (signed char)107;
long long int var_15 = -3197838062484719128LL;
unsigned char var_16 = (unsigned char)222;
int zero = 0;
unsigned char var_17 = (unsigned char)75;
unsigned long long int var_18 = 3287254172520074035ULL;
unsigned long long int var_19 = 15169265819670476795ULL;
int var_20 = 2036493351;
short var_21 = (short)-22025;
unsigned long long int var_22 = 18018578516900914441ULL;
unsigned char var_23 = (unsigned char)69;
unsigned short var_24 = (unsigned short)48875;
int var_25 = -615352816;
short arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
unsigned char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-23779;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 6984199019213009717ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 13534897275048536814ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 11971846350327742357ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)191;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
