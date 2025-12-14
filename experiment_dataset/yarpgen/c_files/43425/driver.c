#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4004599654249240266LL;
int var_1 = -580123109;
long long int var_6 = 7307541409212031216LL;
signed char var_8 = (signed char)-52;
unsigned long long int var_9 = 7208132698632747758ULL;
int zero = 0;
short var_12 = (short)23002;
unsigned short var_13 = (unsigned short)52751;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2043483681151488722LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-112;
short var_19 = (short)18519;
unsigned long long int var_20 = 6658291413765267657ULL;
signed char arr_0 [16] ;
int arr_1 [16] ;
unsigned long long int arr_2 [20] ;
int arr_3 [20] ;
unsigned int arr_4 [20] ;
long long int arr_5 [20] ;
unsigned char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 856251211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 4387905215921790852ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 859793544 : -987810249;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1829651361U : 2998793221U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 8618713657959402288LL : 2706077511879976197LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)106;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
