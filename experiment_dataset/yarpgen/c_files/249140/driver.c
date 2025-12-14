#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2116536670;
long long int var_2 = 2356287027406811377LL;
unsigned int var_3 = 2880315451U;
int var_4 = 993616669;
unsigned short var_7 = (unsigned short)41916;
unsigned char var_10 = (unsigned char)147;
signed char var_11 = (signed char)-112;
unsigned short var_15 = (unsigned short)58257;
signed char var_16 = (signed char)-33;
int zero = 0;
int var_17 = 796696362;
unsigned char var_18 = (unsigned char)166;
unsigned long long int var_19 = 3020311167587226362ULL;
short var_20 = (short)5132;
long long int var_21 = -8763143475444214441LL;
long long int arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
int arr_4 [18] ;
unsigned long long int arr_2 [19] ;
long long int arr_5 [18] [18] ;
int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -4673165366012235781LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 404577438807393279ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2001768594;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 13935382278910183705ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 3930093629555445753LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -120957626;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
