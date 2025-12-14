#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1413273920U;
int var_2 = 818953490;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-110;
long long int var_5 = -6341688768348483586LL;
long long int var_6 = 6468738032237548091LL;
long long int var_8 = 5501572715203237925LL;
signed char var_9 = (signed char)0;
unsigned int var_10 = 3732222960U;
int zero = 0;
int var_12 = -1720670336;
long long int var_13 = 8281556563084319097LL;
long long int var_14 = -5153589357855563524LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 18263769424628722575ULL;
int var_17 = 439371165;
long long int var_18 = 1599790602253391117LL;
short var_19 = (short)-1944;
unsigned long long int var_20 = 5766992077619715202ULL;
long long int var_21 = -3342938944349977700LL;
_Bool var_22 = (_Bool)1;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
unsigned int arr_2 [25] ;
int arr_3 [25] ;
unsigned long long int arr_5 [23] [23] ;
unsigned int arr_7 [23] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 9017190407299901616LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4864158940633293737LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 521814877U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1718574012 : 386441149;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 5661273022369341613ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1359228333U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2562353611185901047LL : 8654906427304739651LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
