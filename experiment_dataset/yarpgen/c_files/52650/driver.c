#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7099082970925070198LL;
unsigned long long int var_3 = 17484698053032747330ULL;
unsigned short var_4 = (unsigned short)55263;
unsigned int var_5 = 1034484075U;
unsigned char var_6 = (unsigned char)42;
unsigned int var_7 = 3574474166U;
unsigned char var_9 = (unsigned char)147;
long long int var_10 = -3534755287030993851LL;
unsigned long long int var_11 = 742667515007217153ULL;
unsigned short var_12 = (unsigned short)35039;
long long int var_13 = -18298036121657256LL;
short var_14 = (short)20371;
int zero = 0;
long long int var_15 = -5041893885368829320LL;
unsigned short var_16 = (unsigned short)41472;
unsigned short var_17 = (unsigned short)31462;
unsigned long long int var_18 = 1035358441524125154ULL;
signed char var_19 = (signed char)79;
_Bool var_20 = (_Bool)0;
unsigned int arr_12 [16] [16] [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
unsigned short arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3541144339U : 992745190U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13742177442261933331ULL : 6449559692696629831ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)5074 : (unsigned short)50197;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
