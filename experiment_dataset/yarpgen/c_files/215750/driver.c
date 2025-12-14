#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5261212193966197811LL;
int var_2 = 17473812;
unsigned char var_3 = (unsigned char)181;
int var_4 = -717590912;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)13940;
signed char var_10 = (signed char)-87;
signed char var_12 = (signed char)-35;
int zero = 0;
unsigned char var_17 = (unsigned char)14;
signed char var_18 = (signed char)82;
unsigned long long int var_19 = 15624466337698291332ULL;
signed char var_20 = (signed char)59;
int var_21 = -1451664256;
signed char var_22 = (signed char)-57;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3113393728U;
int arr_0 [15] [15] ;
int arr_2 [15] ;
unsigned int arr_3 [15] ;
unsigned int arr_5 [15] ;
unsigned long long int arr_9 [15] ;
unsigned char arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -101926432;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -665125663;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 28950782U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 674733298U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 5808689275506312787ULL : 516695379849148586ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)164 : (unsigned char)227;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
