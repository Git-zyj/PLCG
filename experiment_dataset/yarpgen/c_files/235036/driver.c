#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1227596376U;
unsigned long long int var_1 = 6599038134235311705ULL;
int var_2 = -567415980;
long long int var_5 = -4704397231883632248LL;
long long int var_6 = -6178041352239433358LL;
signed char var_8 = (signed char)-48;
short var_18 = (short)-26189;
int zero = 0;
unsigned long long int var_20 = 1300286932333890799ULL;
signed char var_21 = (signed char)-20;
long long int var_22 = 2801287330184108125LL;
unsigned long long int var_23 = 15603808711574229748ULL;
unsigned short var_24 = (unsigned short)24195;
unsigned int var_25 = 1871118399U;
long long int var_26 = 2656399954732059151LL;
long long int var_27 = 7024858523076551923LL;
short var_28 = (short)-980;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
short arr_0 [21] ;
short arr_1 [21] ;
signed char arr_2 [21] [21] ;
_Bool arr_6 [22] [22] ;
short arr_9 [22] [22] ;
short arr_10 [22] ;
unsigned long long int arr_12 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)4194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-25336;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)20327;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-30562;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 259648944501080713ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
