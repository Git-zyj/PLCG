#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
unsigned char var_2 = (unsigned char)76;
signed char var_3 = (signed char)-90;
signed char var_4 = (signed char)-91;
signed char var_5 = (signed char)-33;
long long int var_6 = 6566197437934424817LL;
unsigned int var_7 = 3600662804U;
signed char var_8 = (signed char)-74;
signed char var_9 = (signed char)-100;
int var_10 = 148685142;
long long int var_11 = -2339373955644265546LL;
int var_12 = -735051012;
unsigned int var_13 = 3825904463U;
long long int var_14 = 3452237095009743492LL;
unsigned int var_15 = 2739941508U;
signed char var_16 = (signed char)-43;
int zero = 0;
unsigned char var_17 = (unsigned char)70;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1863333078U;
unsigned char var_20 = (unsigned char)105;
signed char var_21 = (signed char)-122;
unsigned int var_22 = 2226225401U;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)4;
signed char var_27 = (signed char)10;
signed char var_28 = (signed char)80;
long long int var_29 = -7084807520312798838LL;
long long int arr_11 [10] [10] [10] [10] [10] ;
signed char arr_12 [10] [10] ;
long long int arr_13 [10] [10] ;
signed char arr_18 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8407188727709439281LL : 3733661549115991663LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)23 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -1872547016898755429LL : 2590559165030109781LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)110;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
