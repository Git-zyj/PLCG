#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1157538672;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)97;
signed char var_6 = (signed char)-100;
unsigned long long int var_7 = 13126423243796034300ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1373591787U;
signed char var_12 = (signed char)-35;
short var_13 = (short)-19285;
unsigned int var_14 = 1724388616U;
unsigned int var_15 = 660836291U;
int zero = 0;
unsigned char var_17 = (unsigned char)247;
unsigned long long int var_18 = 14643446837089736893ULL;
unsigned long long int var_19 = 11156748882436500149ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)40335;
int var_22 = 32011403;
unsigned long long int var_23 = 10505928959499661769ULL;
unsigned short var_24 = (unsigned short)38881;
unsigned char var_25 = (unsigned char)184;
unsigned char arr_2 [20] [20] ;
unsigned char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)103;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
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
