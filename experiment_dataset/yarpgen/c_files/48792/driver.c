#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1576842202;
unsigned long long int var_1 = 4688440137421882169ULL;
unsigned int var_2 = 3071693532U;
short var_3 = (short)-31117;
int var_4 = 198643271;
long long int var_7 = -5656188177533263871LL;
unsigned int var_8 = 3285847361U;
signed char var_13 = (signed char)-97;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2490161963U;
unsigned int var_16 = 332081491U;
int zero = 0;
short var_18 = (short)19781;
short var_19 = (short)10160;
int var_20 = 854831416;
unsigned int var_21 = 2346688461U;
unsigned int var_22 = 249439568U;
signed char var_23 = (signed char)-109;
unsigned int var_24 = 3700765616U;
int var_25 = -761132489;
long long int arr_9 [19] [19] [19] ;
unsigned int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3415886073602176514LL : 1498080276164802023LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1285546483U : 4134823981U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
