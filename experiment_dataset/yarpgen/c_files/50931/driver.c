#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6572035255268112391ULL;
long long int var_1 = 4799500252518953837LL;
signed char var_2 = (signed char)-19;
unsigned int var_4 = 2909787150U;
signed char var_5 = (signed char)19;
short var_6 = (short)15416;
unsigned short var_8 = (unsigned short)57926;
long long int var_9 = 591604390327347128LL;
short var_11 = (short)-4476;
unsigned int var_12 = 480860913U;
int zero = 0;
long long int var_13 = -7749248269932328299LL;
long long int var_14 = 595518730654639290LL;
unsigned short var_15 = (unsigned short)494;
signed char var_16 = (signed char)41;
long long int var_17 = 4255217915081390398LL;
unsigned int var_18 = 3459237673U;
unsigned char arr_0 [24] [24] ;
_Bool arr_1 [24] ;
short arr_2 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-21518;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 13346246821794689878ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
