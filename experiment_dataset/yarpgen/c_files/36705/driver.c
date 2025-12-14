#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3511884471626479862ULL;
short var_1 = (short)-30655;
long long int var_2 = -7087177282185020571LL;
short var_3 = (short)7316;
int var_4 = -2074848890;
unsigned char var_6 = (unsigned char)80;
unsigned char var_7 = (unsigned char)140;
unsigned int var_8 = 472819647U;
unsigned short var_9 = (unsigned short)42101;
int var_10 = -257728828;
unsigned long long int var_11 = 13392731386672264301ULL;
int zero = 0;
short var_12 = (short)32482;
unsigned char var_13 = (unsigned char)113;
unsigned char var_14 = (unsigned char)78;
signed char var_15 = (signed char)49;
unsigned long long int var_16 = 7229687599002068967ULL;
unsigned short var_17 = (unsigned short)30336;
short var_18 = (short)4479;
unsigned char var_19 = (unsigned char)98;
unsigned int var_20 = 556764348U;
long long int var_21 = 6357061470552732444LL;
signed char var_22 = (signed char)112;
short var_23 = (short)19405;
short var_24 = (short)9464;
long long int arr_3 [18] ;
int arr_11 [10] [10] ;
_Bool arr_16 [10] [10] [10] [10] ;
unsigned int arr_17 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1817644018556300389LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 1684729732;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = 1931824993U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
