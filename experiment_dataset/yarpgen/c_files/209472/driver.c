#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)112;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1792037826U;
long long int var_5 = -9099040638589583228LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16729133304396233078ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_12 = 203200738195025649LL;
int var_13 = -7706844;
signed char var_14 = (signed char)-93;
unsigned char var_15 = (unsigned char)231;
unsigned short var_16 = (unsigned short)39741;
long long int var_17 = -4653984776291165849LL;
unsigned int var_18 = 6284942U;
unsigned int arr_2 [20] ;
unsigned short arr_4 [18] [18] ;
int arr_5 [18] [18] ;
signed char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 285151230U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53791 : (unsigned short)33145;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -2025685281 : -1633766891;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)95;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
