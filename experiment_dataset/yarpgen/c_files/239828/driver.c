#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18075;
long long int var_5 = -4126563982687361978LL;
int var_7 = -480157611;
int var_9 = -620121892;
unsigned short var_10 = (unsigned short)12862;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6770513332045567632LL;
unsigned char var_14 = (unsigned char)31;
unsigned short var_15 = (unsigned short)27887;
unsigned short var_16 = (unsigned short)44628;
signed char arr_1 [16] ;
long long int arr_4 [16] [16] ;
unsigned char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -5177799572254183865LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)139;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
