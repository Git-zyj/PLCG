#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3546160808U;
unsigned int var_1 = 2460358148U;
unsigned long long int var_3 = 7776820386188523226ULL;
unsigned long long int var_4 = 3489375311231933692ULL;
long long int var_5 = 922923898631155519LL;
unsigned long long int var_6 = 16185925503856906006ULL;
unsigned long long int var_7 = 1791334045069768559ULL;
unsigned int var_8 = 1858887969U;
short var_9 = (short)47;
signed char var_11 = (signed char)25;
int zero = 0;
unsigned int var_12 = 2174685780U;
unsigned short var_13 = (unsigned short)38199;
unsigned long long int var_14 = 6530155310393237186ULL;
long long int var_15 = -7780342474435733776LL;
unsigned int var_16 = 2896627434U;
unsigned long long int var_17 = 11344102918500311663ULL;
long long int var_18 = 983780277839122953LL;
long long int var_19 = 8646482185905655828LL;
long long int var_20 = 2422084426734854201LL;
unsigned long long int arr_0 [12] [12] ;
int arr_1 [12] ;
long long int arr_5 [12] [12] ;
unsigned long long int arr_2 [12] ;
unsigned short arr_3 [12] [12] ;
int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 16121882108641415496ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -1064698418;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -2076885587307922500LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13234956399170101168ULL : 9774886187941189421ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57882 : (unsigned short)6294;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = -2126543017;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
