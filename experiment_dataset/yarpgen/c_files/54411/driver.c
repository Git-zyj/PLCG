#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
long long int var_1 = 546914812827390859LL;
int var_2 = -1518658340;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)16358;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2501554147U;
unsigned short var_12 = (unsigned short)7571;
int zero = 0;
signed char var_14 = (signed char)-65;
long long int var_15 = -7423017881337605996LL;
unsigned short var_16 = (unsigned short)13763;
long long int var_17 = -8053787589762023044LL;
unsigned int var_18 = 3903927569U;
unsigned short var_19 = (unsigned short)50309;
int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
signed char arr_5 [25] [25] ;
unsigned char arr_6 [25] [25] ;
_Bool arr_4 [16] [16] ;
long long int arr_7 [25] ;
unsigned long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 285919429;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 10585278245326714583ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2003945312232464062LL : -5248012815853176706LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1167429684578326453ULL : 16749000006590770733ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
