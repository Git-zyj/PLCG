#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10843397045537460069ULL;
int var_1 = 212584404;
short var_2 = (short)-24872;
unsigned short var_4 = (unsigned short)38394;
long long int var_5 = -6776119568472771142LL;
short var_6 = (short)-25645;
short var_7 = (short)28430;
short var_10 = (short)-20428;
short var_11 = (short)26880;
long long int var_13 = 2232713838398919887LL;
int zero = 0;
short var_16 = (short)-19869;
unsigned short var_17 = (unsigned short)59140;
short var_18 = (short)-800;
unsigned short var_19 = (unsigned short)10810;
unsigned long long int var_20 = 2039672645665771758ULL;
short var_21 = (short)24711;
_Bool var_22 = (_Bool)1;
int arr_0 [12] ;
short arr_7 [12] [12] [12] [12] ;
short arr_9 [12] [12] ;
short arr_13 [12] ;
_Bool arr_14 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -323477152;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)6130 : (short)7088;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-14713;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)6636;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
