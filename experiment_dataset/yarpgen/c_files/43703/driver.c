#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3216473823534445907ULL;
short var_2 = (short)-25657;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 4110728904901058691ULL;
long long int var_7 = 658014555735420285LL;
int var_8 = 1638940305;
unsigned int var_10 = 3436587573U;
unsigned short var_12 = (unsigned short)12269;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
long long int var_14 = 3392827115951482127LL;
long long int var_15 = -2429485784686552445LL;
int var_16 = 846511056;
unsigned short var_17 = (unsigned short)51337;
unsigned char var_18 = (unsigned char)25;
int var_19 = 496196031;
unsigned long long int var_20 = 50726093282499227ULL;
long long int arr_1 [12] ;
int arr_3 [12] [12] ;
short arr_4 [12] ;
signed char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 5265873584320507363LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 139435699;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-10011;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)112;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
