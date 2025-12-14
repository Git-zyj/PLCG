#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)102;
short var_4 = (short)-24608;
_Bool var_5 = (_Bool)1;
short var_6 = (short)6193;
unsigned int var_7 = 4018194256U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)52796;
signed char var_11 = (signed char)-107;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1769106486U;
int var_14 = -579782807;
unsigned long long int var_15 = 3665253844350935326ULL;
int var_16 = 1926520664;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)11265;
unsigned char var_19 = (unsigned char)190;
int var_20 = 778480702;
long long int var_21 = 6013454735967046951LL;
_Bool var_22 = (_Bool)1;
int var_23 = -1811126219;
int arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
_Bool arr_10 [19] [19] [19] [19] ;
unsigned short arr_11 [19] [19] [19] [19] ;
long long int arr_12 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1952758580;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2269039730U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 960866167497113114ULL : 11417866636417485104ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3637787473410296124ULL : 18138969229522662876ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11575235015113828041ULL : 11605560413367405270ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)56832;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 8585052004619079237LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
