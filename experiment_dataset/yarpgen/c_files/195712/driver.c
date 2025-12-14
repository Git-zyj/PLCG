#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)154;
unsigned char var_5 = (unsigned char)65;
unsigned long long int var_11 = 6465346465174427628ULL;
short var_12 = (short)-24466;
unsigned long long int var_16 = 13848116111996194890ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
short var_18 = (short)-32419;
unsigned long long int var_19 = 12373993323516639169ULL;
long long int var_20 = -5110989530881583553LL;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
unsigned int arr_4 [24] ;
long long int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 14724260649444385952ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 247037756U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)28011;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3529999957U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6528677722302599490LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
