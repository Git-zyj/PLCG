#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned int var_1 = 729891414U;
long long int var_2 = 9077150144023894465LL;
int var_3 = -225881946;
unsigned int var_5 = 3562812176U;
long long int var_7 = 8387110788873058971LL;
unsigned int var_8 = 1945937897U;
unsigned short var_9 = (unsigned short)31940;
unsigned short var_11 = (unsigned short)17519;
int zero = 0;
unsigned int var_12 = 1212277620U;
_Bool var_13 = (_Bool)0;
int var_14 = 2046892419;
unsigned char var_15 = (unsigned char)254;
unsigned short var_16 = (unsigned short)39751;
unsigned int var_17 = 3461387718U;
unsigned int var_18 = 279890813U;
short var_19 = (short)-7319;
unsigned long long int var_20 = 15641946632359372905ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14751786712463605368ULL;
short var_23 = (short)27036;
unsigned char var_24 = (unsigned char)25;
unsigned long long int var_25 = 2435400777203229071ULL;
unsigned short var_26 = (unsigned short)47998;
unsigned short arr_0 [16] ;
_Bool arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] ;
int arr_4 [18] ;
unsigned short arr_9 [18] ;
long long int arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)17504;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1547559852U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1390297749;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)48590;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 233812628444329203LL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
