#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
int var_1 = 1256393472;
unsigned char var_2 = (unsigned char)13;
long long int var_3 = -1098076542207836504LL;
unsigned char var_4 = (unsigned char)66;
unsigned int var_9 = 2395425457U;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)35495;
short var_15 = (short)-4948;
int var_16 = 505472645;
short var_17 = (short)-23441;
int zero = 0;
long long int var_18 = 647674333939428633LL;
int var_19 = -439403635;
long long int var_20 = -6470011673684174617LL;
unsigned int var_21 = 1796433264U;
short var_22 = (short)18407;
unsigned short var_23 = (unsigned short)8452;
signed char var_24 = (signed char)-120;
unsigned long long int arr_5 [25] [25] [25] ;
short arr_9 [25] ;
_Bool arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14593098833291167073ULL : 7130603029843762731ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)6953 : (short)29382;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
