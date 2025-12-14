#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)65267;
long long int var_2 = 674294524414685485LL;
int var_4 = 415024456;
unsigned int var_5 = 1000266032U;
long long int var_6 = -2870061227734674287LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 1796869600649805330ULL;
unsigned int var_10 = 2480092288U;
unsigned int var_12 = 703164486U;
long long int var_14 = -2181802925506528332LL;
unsigned long long int var_15 = 13190501439651357626ULL;
int zero = 0;
long long int var_16 = -868064846660096333LL;
unsigned long long int var_17 = 4178712164979926227ULL;
long long int var_18 = -2258626618858451865LL;
signed char var_19 = (signed char)-70;
unsigned long long int var_20 = 10850445626591330595ULL;
unsigned char var_21 = (unsigned char)56;
int arr_0 [21] ;
_Bool arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1758151899;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1057251254U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
